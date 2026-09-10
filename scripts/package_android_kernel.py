"""Publish two deterministic P6 Mod packages after the formal link checks."""
import argparse
import hashlib
import json
import os
from pathlib import Path
import tempfile
import zipfile

from android_kernel_binary import elf_contract
from android_kernel_inputs import InputError, read_json, sha


def json_bytes(value):
    return (json.dumps(value, sort_keys=True, indent=2, ensure_ascii=False) + '\n').encode('utf-8')


def publish(repository, evidence, mode, output):
    repository, evidence, output = (Path(p).resolve() for p in (repository, evidence, output))
    if output == repository or repository in output.parents:
        raise InputError('packages must be outside the source worktree')
    lock_path = repository / 'config/android-kernel-inputs.lock.json'
    lock = read_json(lock_path)
    results = json.loads((evidence / (mode + '-results.json')).read_text(encoding='utf-8-sig'))
    if [item['phase'] for item in results] != ['configure', 'build']:
        raise InputError('complete configure/build evidence is required')
    for item in results:
        if item['exit_code'] or item['mode'] != mode or sha(Path(item['log'])) != item['log_sha256']:
            raise InputError('build evidence is incomplete or changed')
        for name, expected in item['source_files'].items():
            path = (repository / name).resolve()
            if repository not in path.parents:
                raise InputError('source evidence escaped repository')
            normalized = path.read_bytes().replace(b'\r\n', b'\n')
            if hashlib.sha256(normalized).hexdigest().upper() != expected:
                raise InputError('source changed after build: ' + name)
    build = evidence / ('build-' + mode)
    packages = []
    for role, target in [('kernel', 'LeviLaminaAndroidKernel'), ('example', 'LeviLaminaP6Example')]:
        folder = build / 'android-kernel' / role
        config, report = (read_json(folder / name) for name in ('inputs.json', 'elf.json'))
        package = lock['package' if role == 'kernel' else 'example']
        if config['lock_sha256'] != sha(lock_path) or config['package'] != package or config['role'] != role:
            raise InputError('package input lock mismatch')
        if not report['passed'] or not report['G6_complete'] or report['function_imports'] != 0:
            raise InputError('formal P5 gate incomplete')
        elf = Path(report['stripped_path'])
        if elf_contract(elf, 'G5', role) != report['stripped']:
            raise InputError('verified ELF changed')
        artifacts = build / '.prelink/android' / target
        if len(report['p5_artifacts']) != 5:
            raise InputError('all five P5 artifacts are required')
        for name, expected in report['p5_artifacts'].items():
            if Path(name).name != name or sha(artifacts / name) != expected:
                raise InputError('P5 artifact changed: ' + name)
        commands = json.loads((folder / 'link-commands.json').read_text(encoding='utf-8-sig'))
        if [item['name'] for item in commands] != ['generate', 'link', 'verify-unstripped', 'strip', 'verify-stripped']:
            raise InputError('formal link/strip evidence missing')
        for item in commands:
            if item['exit_code'] or sha(folder / (item['name'] + '.log')) != item['log_sha256']:
                raise InputError('formal link evidence changed')
        packages.append((package, elf.read_bytes()))
    output.mkdir(parents=True, exist_ok=True)
    guard = output / '.publish.lock'
    fd = os.open(guard, os.O_CREAT | os.O_EXCL | os.O_WRONLY, 0o600)
    try:
        os.close(fd)
        staging = Path(tempfile.mkdtemp(prefix='staging-', dir=output))
        records = []
        for package, binary in packages:
            name, entry = package['name'], package['entry']
            if Path(name).name != name or Path(entry).name != entry:
                raise InputError('invalid package path')
            directory = staging / name
            directory.mkdir()
            files = {'manifest.json': json_bytes(package), entry: binary}
            archive = staging / (name + '.zip')
            with zipfile.ZipFile(archive, 'x', compression=zipfile.ZIP_STORED) as writer:
                for filename, data in sorted(files.items()):
                    (directory / filename).write_bytes(data)
                    item = zipfile.ZipInfo(filename, (1980, 1, 1, 0, 0, 0))
                    item.create_system = 3
                    item.external_attr = 0o100644 << 16
                    writer.writestr(item, data)
            with zipfile.ZipFile(archive) as reader:
                if reader.testzip() or {name: reader.read(name) for name in reader.namelist()} != files:
                    raise InputError('package round trip failed')
            records.append({'name': name, 'archive': archive.name, 'sha256': sha(archive),
                            'elf_sha256': hashlib.sha256(binary).hexdigest().upper()})
        identity = hashlib.sha256(json_bytes(records)).hexdigest()
        generation = output / identity
        if generation.exists():
            for record in records:
                if sha(generation / record['archive']) != record['sha256']:
                    raise InputError('existing immutable generation changed')
        else:
            staging.rename(generation)
        index = {'schema_version': 1, 'mode': mode, 'generation': identity, 'packages': records,
                 'input_lock_sha256': sha(lock_path), 'provider_sha256': lock['provider']['sha256'],
                 'device_acceptance': 'separate evidence required'}
        temporary = output / '.current.json.new'
        with temporary.open('wb') as stream:
            stream.write(json_bytes(index))
            stream.flush()
            os.fsync(stream.fileno())
        os.replace(temporary, output / 'current.json')
        return index
    finally:
        guard.unlink()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--repository', type=Path, default=Path(__file__).resolve().parent.parent)
    parser.add_argument('--evidence', type=Path, required=True)
    parser.add_argument('--mode', choices=['debug', 'release'], required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    print(json.dumps(publish(args.repository, args.evidence, args.mode, args.output), indent=2))


if __name__ == '__main__':
    try:
        main()
    except (InputError, OSError, ValueError, KeyError) as error:
        raise SystemExit('P6 package rejected; previous index preserved: ' + str(error))
