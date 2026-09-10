"""Link each real target with the unchanged five P5 artifacts, then verify twice."""
import argparse
import json
import os
from pathlib import Path
import shutil
import subprocess

from android_kernel_inputs import InputError, read_json, sha
from android_kernel_binary import elf_contract, source_names, verify_traces, write_json


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--inputs', type=Path, required=True)
    parser.add_argument('--traces', type=Path, required=True)
    parser.add_argument('--elf', type=Path, required=True)
    parser.add_argument('--kernel-elf', type=Path)
    parser.add_argument('--prelink-dir', type=Path, required=True)
    parser.add_argument('--object', type=Path, action='append', default=[])
    args = parser.parse_args()
    config = read_json(args.inputs)
    inputs = config['inputs']
    role = config['role']
    evidence = args.inputs.parent
    prelink = args.prelink_dir.resolve()
    objects = sorted((p.resolve() for p in args.object), key=lambda p: p.name)
    if len(objects) != len(source_names(config)) or len({p.name for p in objects}) != len(objects):
        raise InputError('explicit object identity/count mismatch')
    coverage = verify_traces(config, args.traces)
    env = dict(os.environ, SOURCE_DATE_EPOCH='0')
    commands = []

    def run(name, command, cwd=None):
        result = subprocess.run(list(map(str, command)), cwd=cwd, env=env, capture_output=True, text=True, encoding='utf-8', errors='replace')
        log = evidence / (name + '.log')
        log.write_text(result.stdout + result.stderr, encoding='utf-8')
        commands.append({'name': name, 'command': list(map(str, command)), 'exit_code': result.returncode, 'log_sha256': sha(log)})
        write_json(evidence / 'link-commands.json', commands)
        if result.returncode:
            raise InputError(name + ' failed: ' + (result.stdout + result.stderr)[-6000:])

    common = ['--runtime-manifest', inputs['runtime_manifest'], '--bmb', inputs['bmb'],
              '--provider-elf', inputs['provider'], '--target-elf', inputs['target']]
    run('generate', [inputs['prelink'], 'android', 'generate', *common, '--ndk', inputs['ndk'], '--output', prelink, '--', *objects])
    imports = read_json(prelink / 'bedrock_runtime_imports.json')
    if imports['functionImports'] != []:
        raise InputError('P6 kernel/example must have zero MC function imports')
    ndk = Path(inputs['ndk']) / 'toolchains/llvm/prebuilt/windows-x86_64'
    output = args.elf.resolve()
    output.parent.mkdir(parents=True, exist_ok=True)
    exports = Path(config['repository']) / 'scripts/xmake' / ('android-example.exports' if role == 'example' else 'android-kernel.exports')
    command = [ndk/'bin/clang++.exe', '--target=aarch64-linux-android28', '--sysroot='+str(ndk/'sysroot'),
               '-shared', '-nostdlib++', '-Wl,-z,defs', '-Wl,-z,max-page-size=16384', '-Wl,-z,common-page-size=16384',
               '-Wl,--build-id=sha1', '-Wl,-soname,'+config['package']['entry'], '-Wl,--version-script='+str(exports),
               '-L'+str(Path(inputs['provider']).parent), *objects, '@bedrock_runtime_link.rsp']
    if role == 'example':
        if not args.kernel_elf or not args.kernel_elf.is_file(): raise InputError('built kernel is required for example')
        command += ['-L'+str(args.kernel_elf.resolve().parent), '-lLeviLamina']
    command += ['-lc++_shared', '-llog', '-ldl', '-lm', '-o', output]
    # The untouched response file names its archive relative to this directory.
    run('link', command, prelink)
    verify = [inputs['prelink'], 'android', 'verify', *common, '--imports-manifest', prelink/'bedrock_runtime_imports.json']
    run('verify-unstripped', [*verify, '--elf', output])
    plain = elf_contract(output, 'G5', role)
    stripped = evidence / 'stripped' / output.name
    stripped.parent.mkdir(exist_ok=True)
    run('strip', [ndk/'bin/llvm-strip.exe', '--strip-all', '-o', stripped, output])
    run('verify-stripped', [*verify, '--elf', stripped])
    compact = elf_contract(stripped, 'G5', role)
    report = {'phase': 'G5', 'role': role, 'passed': True, 'G6_complete': True, 'function_imports': 0,
              'objects': [{'name': p.name, 'sha256': sha(p)} for p in objects], 'header_coverage': coverage,
              'unstripped': plain, 'stripped': compact, 'stripped_path': str(stripped),
              'p5_artifacts': {p.name: sha(p) for p in prelink.iterdir() if p.is_file()}}
    write_json(evidence/'elf.json', report)
    print(role + ': real P5 artifacts consumed, zero MC imports, strip-before/after verification passed')


if __name__ == '__main__':
    try: main()
    except (InputError, OSError, ValueError, KeyError) as error: raise SystemExit('P6 link rejected: '+str(error))
