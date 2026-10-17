"""Prepare P5 imports and verify the shared library linked by xmake."""
import argparse
import json
from pathlib import Path
import subprocess

from android_kernel_inputs import InputError, authenticate, read_json, sha
from android_kernel_binary import elf_contract, source_names, verify_traces, write_json


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--stage', choices=('prepare', 'verify'), required=True)
    parser.add_argument('--inputs', type=Path, required=True)
    parser.add_argument('--traces', type=Path, required=True)
    parser.add_argument('--elf', type=Path, required=True)
    parser.add_argument('--prelink-dir', type=Path, required=True)
    parser.add_argument('--object', type=Path, action='append', default=[])
    parser.add_argument('--archive', type=Path, action='append', default=[])
    args = parser.parse_args()
    config = read_json(args.inputs)
    repo = Path(config['repository'])
    fresh = authenticate(repo, config['inputs'], role=config['role'], destination=Path(config['include_roots'][0]))
    if config != fresh:
        raise InputError('configured source/runtime inputs changed before linking')
    coverage = verify_traces(config, args.traces)
    inputs = config['inputs']
    evidence = args.inputs.parent
    prelink = args.prelink_dir.resolve()
    prelink.mkdir(parents=True, exist_ok=True)
    ndk = Path(inputs['ndk']) / 'toolchains/llvm/prebuilt/windows-x86_64'
    prepared_path = evidence / 'prepared.json'
    if args.stage == 'prepare':
        objects = sorted(p.resolve() for p in args.object)
        if len(objects) != len(source_names(config)) or len(set(objects)) != len(objects):
            raise InputError('explicit object count/identity mismatch')
        prepared = {
            'inputs_sha256': sha(args.inputs),
            'objects': [{'path': str(p), 'sha256': sha(p)} for p in objects],
            'archives': [{'path': str(p.resolve()), 'sha256': sha(p)} for p in args.archive],
        }
        commands = []
    else:
        prepared = read_json(prepared_path)
        if prepared['inputs_sha256'] != sha(args.inputs):
            raise InputError('configured inputs changed after prelink')
        for item in prepared['objects'] + prepared['archives']:
            if sha(Path(item['path'])) != item['sha256']:
                raise InputError('link input changed after prelink: ' + item['path'])
        commands = read_json(evidence / 'link-commands.json')['commands']

    def run(name, command, cwd=None):
        command = list(map(str, command))
        result = subprocess.run(command, cwd=cwd, capture_output=True, text=True, encoding='utf-8', errors='replace')
        log = evidence / (name + '.log')
        log.write_text(result.stdout + result.stderr, encoding='utf-8', newline='\n')
        commands.append({'name': name, 'command': command, 'exit_code': result.returncode, 'log_sha256': sha(log)})
        write_json(evidence / 'link-commands.json', {'commands': commands})
        if result.returncode:
            raise InputError(name + ' failed: ' + (result.stdout + result.stderr)[-4500:])

    common = ['--runtime-manifest', inputs['runtime_manifest'], '--bmb', inputs['bmb'],
              '--provider-elf', inputs['provider'], '--target-elf', inputs['target'], '--ndk', inputs['ndk']]
    generated = prelink / 'generated'
    if args.stage == 'prepare':
        run('generate', [inputs['prelink'], 'android', 'generate', *common, '--output', generated,
                         '--', *objects, *args.archive])
        write_json(prepared_path, prepared)
        print('P7 prelink inputs prepared; final link belongs to xmake.')
        return
    output = args.elf.resolve()
    verify = [inputs['prelink'], 'android', 'verify', *common,
              '--imports-manifest', generated/'bedrock_runtime_imports.json']
    run('verify-unstripped', [*verify, '--elf', output])
    plain = elf_contract(output, config['phase'], config['role'])
    stripped = evidence / 'stripped' / output.name
    stripped.parent.mkdir(exist_ok=True)
    run('strip', [ndk/'bin/llvm-strip.exe', '--strip-all', '-o', stripped, output])
    run('verify-stripped', [*verify, '--elf', stripped])
    compact = elf_contract(stripped, config['phase'], config['role'])
    if set(plain['exports']) != set(compact['exports']) or plain['needed'] != compact['needed']:
        raise InputError('stripping changed the public ABI')
    write_json(evidence/'linked.json', {'phase':config['phase'], 'role':config['role'],
        'header_coverage':coverage, 'unstripped':plain, 'stripped':compact,
        'objects':prepared['objects'], 'archives':prepared['archives'], 'G3_G8_complete':False})
    print('P7 shared LL link and strip verification passed')


if __name__ == '__main__':
    main()
