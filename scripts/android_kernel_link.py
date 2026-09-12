"""Link original shared LL sources through the authenticated P7/P5 SDK contract."""
import argparse
import json
from pathlib import Path
import subprocess

from android_kernel_inputs import InputError, authenticate, read_json, sha
from android_kernel_binary import elf_contract, source_names, verify_traces, write_json


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--inputs', type=Path, required=True)
    parser.add_argument('--traces', type=Path, required=True)
    parser.add_argument('--elf', type=Path, required=True)
    parser.add_argument('--kernel-elf', type=Path)
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
    objects = sorted(p.resolve() for p in args.object)
    if len(objects) != len(source_names(config)) or len(set(objects)) != len(objects):
        raise InputError('explicit object count/identity mismatch')
    inputs = config['inputs']
    evidence = args.inputs.parent
    prelink = args.prelink_dir.resolve()
    prelink.mkdir(parents=True, exist_ok=True)
    ndk = Path(inputs['ndk']) / 'toolchains/llvm/prebuilt/windows-x86_64'
    commands = []

    def run(name, command, cwd=None):
        command = list(map(str, command))
        result = subprocess.run(command, cwd=cwd, capture_output=True, text=True, encoding='utf-8', errors='replace')
        log = evidence / (name + '.log')
        log.write_text(result.stdout + result.stderr, encoding='utf-8', newline='\n')
        commands.append({'name': name, 'command': command, 'exit_code': result.returncode, 'log_sha256': sha(log)})
        write_json(evidence / 'link-commands.json', {'commands': commands})
        if result.returncode:
            raise InputError(name + ' failed: ' + (result.stdout + result.stderr)[-4500:])

    # Resolve actual static dependency definitions before P5 classifies imports.
    merged = prelink / 'shared-core.o'
    run('partial-link', [ndk/'bin/ld.lld.exe', '-r', *objects, *args.archive, '-o', merged])
    common = ['--runtime-manifest', inputs['runtime_manifest'], '--bmb', inputs['bmb'],
              '--provider-elf', inputs['provider'], '--target-elf', inputs['target'], '--ndk', inputs['ndk']]
    generated = prelink / 'generated'
    run('generate', [inputs['prelink'], 'android', 'generate', *common, '--output', generated, '--', merged])
    exports = repo / 'scripts/xmake' / ('android-example.exports' if config['role'] == 'example' else 'android-kernel.exports')
    output = args.elf.resolve()
    output.parent.mkdir(parents=True, exist_ok=True)
    command = [ndk/'bin/clang++.exe', '--target=aarch64-linux-android28', '-shared',
               '-Wl,-z,defs', '-Wl,-z,max-page-size=16384', '-Wl,-z,common-page-size=16384',
               '-Wl,--build-id=sha1', '-Wl,-soname,'+config['package']['entry'],
               '-Wl,--version-script='+str(exports), merged, '@bedrock_runtime_link.rsp',
               '-L'+str(Path(inputs['provider']).parent)]
    if config['role'] == 'example':
        if not args.kernel_elf or not args.kernel_elf.is_file(): raise InputError('built LL is required')
        command += ['-L'+str(args.kernel_elf.resolve().parent), '-lLeviLamina']
    command += ['-llog', '-ldl', '-o', output]
    run('link', command, generated)
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
        'objects':[{ 'name':p.name, 'sha256':sha(p)} for p in objects],
        'archives':[{ 'name':p.name, 'sha256':sha(p)} for p in args.archive], 'G3_G8_complete':False})
    print('P7 shared LL link and strip verification passed')


if __name__ == '__main__':
    main()
