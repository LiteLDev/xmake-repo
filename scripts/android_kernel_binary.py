#!/usr/bin/env python3
"""Check actual include traces, P5 classification, and the G2 ELF contract."""
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path
import re
import struct
import subprocess

from android_kernel_inputs import InputError, git, read_json, sha

def source_names(config: dict) -> set[str]:
    if config.get("phase") != "P7-G0-G2" or config.get("source_layout") != "shared-v1":
        raise InputError("unsupported shared-core input format")
    return {name.replace("/", "_").replace(".", "_") for name in config["sources"]}


def write_json(path: Path, value: dict) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2, sort_keys=True) + "\n", encoding="utf-8", newline="\n")


def tree_ids(root: Path, ref: str) -> dict[str, str]:
    rows = git(root, "ls-tree", "-r", ref).splitlines()
    return {path: info.split()[2] for info, path in (row.split("\t", 1) for row in rows)}


def check_blob(path: Path, relative: str, ids: dict[str, str], label: str) -> str:
    data = path.read_bytes().replace(b"\r\n", b"\n")
    oid = hashlib.sha1(b"blob " + str(len(data)).encode() + b"\0" + data).hexdigest()
    if ids.get(relative) != oid:
        raise InputError(f"compiled {label} does not match its frozen Git blob: {relative}")
    return hashlib.sha256(data).hexdigest().upper()


def verify_traces(config: dict, directory: Path) -> dict:
    repo = Path(config["repository"]).resolve()
    header = Path(config["inputs"]["header_root"]).resolve()
    sdk = Path(config["inputs"]["preloader_root"]).resolve()
    h_ids = tree_ids(header, config["commits"]["S"])
    pl_ids = tree_ids(sdk, config["commits"]["PL"])
    actual = {p.stem for p in directory.glob("*.txt")}
    expected_sources = source_names(config)
    if actual != expected_sources:
        raise InputError("missing or unexpected compilation include traces")
    units = {}
    all_mc = set()
    for name in sorted(expected_sources):
        trace = directory / (name + ".txt")
        files = {}
        for line in trace.read_text(encoding="utf-8-sig").splitlines():
            if not line.strip():
                continue
            raw = Path(re.sub(r"^\.+\s+", "", line.strip()))
            if not raw.is_absolute():
                raw = repo / raw
            if raw.is_symlink():
                raise InputError("symbolic include file is not an authenticated source")
            path = raw.resolve()
            if not path.is_file():
                raise InputError("a compiler include no longer exists")
            if "mc" in path.parts:
                if not path.is_relative_to(header):
                    raise InputError("Minecraft include is outside Header S: " + str(path))
                relative = path.relative_to(header).as_posix()
                if not relative.startswith(("src/mc/", "src-android/mc/")):
                    raise InputError("Minecraft include uses the wrong platform layer")
                files[relative] = check_blob(path, relative, h_ids, "Minecraft Header")
                all_mc.add(relative.split("/", 1)[1])
            elif "ll" in path.parts:
                view = Path(config["include_roots"][0]).resolve()
                if path.is_relative_to(view):
                    relative = path.relative_to(view).as_posix()
                    selected = config["ll_headers"].get(relative)
                    if not selected or sha(path) != selected["sha256"] or sha(repo / selected["source"]) != selected["sha256"]:
                        raise InputError("shared/client Header view changed after configuration: " + relative)
                    files[selected["source"]] = selected["sha256"]
                elif path.is_relative_to(repo / "src-android/ll"):
                    relative = path.relative_to(repo / "src-android").as_posix()
                    if relative in config["ll_headers"]:
                        raise InputError("Android Header shadows a shared/client interface: " + relative)
                    files[path.relative_to(repo).as_posix()] = sha(path)
                elif path.name == "Version.h" and path.parent.name == "core" and "config" in path.parts:
                    files["generated/ll/core/Version.h"] = sha(path)
                else:
                    raise InputError("unapproved LL include: " + str(path))
            elif "pl" in path.parts:
                if not path.is_relative_to(sdk):
                    raise InputError("PL include is outside the frozen SDK")
                relative = path.relative_to(sdk).as_posix()
                if not relative.startswith(("src/pl/", "src-android/pl/")):
                    raise InputError("unapproved PL include root")
                files["PL/" + relative] = check_blob(path, relative, pl_ids, "PL Header")
        if not files:
            raise InputError("compiler trace contains no project or SDK Headers")
        units[name] = {"trace_sha256": sha(trace), "authenticated_headers": files}
    return {"units": units, "mc_unique_count": len(all_mc), "all_mc_from_S": True}


def elf_contract(path: Path, phase: str = "P7-G0-G2", role: str = "kernel", expected_soname: str | None = None) -> dict:
    if phase != "P7-G0-G2" or role not in ("kernel", "example"):
        raise InputError("unsupported kernel phase")
    data = path.read_bytes()

    def block(offset: int, size: int) -> bytes:
        if offset < 0 or size < 0 or offset + size > len(data):
            raise InputError("truncated ELF range")
        return data[offset:offset + size]

    def fields(fmt: str, offset: int):
        return struct.unpack(fmt, block(offset, struct.calcsize(fmt)))

    def string(table: bytes, offset: int) -> str:
        end = table.find(b"\0", offset)
        if offset >= len(table) or end < 0:
            raise InputError("invalid ELF string")
        return table[offset:end].decode("utf-8")

    h = fields("<16sHHIQQQIHHHHHH", 0)
    if h[0][:7] != b"\x7fELF\x02\x01\x01" or h[1] != 3 or h[2] != 183:
        raise InputError("kernel must be ELF64 little-endian AArch64 ET_DYN")
    if h[9] != 56 or h[11] != 64 or not h[10] or not h[12]:
        raise InputError("unsupported ELF header tables")
    loads = []
    stack_seen = False
    for i in range(h[10]):
        ph = fields("<IIQQQQQQ", h[5] + i * h[9])
        if ph[0] == 1:
            block(ph[2], ph[5])
            if ph[6] < ph[5] or ph[3] + ph[6] > 2**64:
                raise InputError("invalid LOAD memory range")
            if ph[7] != 16384 or ph[2] % ph[7] != ph[3] % ph[7] or (ph[1] & 3) == 3:
                raise InputError("LOAD alignment or executable/writable segment violation")
            loads.append({"offset": ph[2], "vaddr": ph[3], "alignment": ph[7], "flags": ph[1]})
        if ph[0] == 0x6474E551:
            stack_seen = True
            if ph[1] & 1:
                raise InputError("executable stack is forbidden")
    if not loads or not stack_seen:
        raise InputError("ELF program headers are incomplete")
    sections = [fields("<IIQQQQIIQQ", h[6] + i * h[11]) for i in range(h[12])]
    names = sections[h[13]]
    shstr = block(names[4], names[5])
    exports, needed, api_notes = [], [], []
    export_details = {}
    soname = None
    for sec in sections:
        section_name = string(shstr, sec[0])
        if sec[1] in (6, 11):
            if sec[6] >= len(sections):
                raise InputError("invalid ELF string table link")
            table = sections[sec[6]]
            strings = block(table[4], table[5])
            if sec[1] == 6:
                if sec[9] != 16 or sec[5] % 16:
                    raise InputError("unexpected dynamic table entry size")
                for offset in range(sec[4], sec[4] + sec[5], 16):
                    tag, value = fields("<qQ", offset)
                    if tag == 0:
                        break
                    if tag == 1:
                        needed.append(string(strings, value))
                    elif tag == 14:
                        if soname is not None:
                            raise InputError("duplicate SONAME entry")
                        soname = string(strings, value)
                    elif tag == 22 or (tag == 30 and value & 4):
                        raise InputError("text relocations are forbidden")
            else:
                if sec[9] != 24 or sec[5] % 24:
                    raise InputError("unexpected dynamic symbol size")
                for offset in range(sec[4], sec[4] + sec[5], 24):
                    name, info, other, index, _, _ = fields("<IBBHQQ", offset)
                    if index and info >> 4 in (1, 2) and other & 3 in (0, 3):
                        symbol = string(strings, name)
                        exports.append(symbol)
                        export_details[symbol] = (info & 15, info >> 4, other & 3)
        elif sec[1] == 7 and section_name == ".note.android.ident":
            offset = sec[4]
            while offset < sec[4] + sec[5]:
                name_size, desc_size, _ = fields("<III", offset)
                offset += 12
                name = block(offset, name_size).rstrip(b"\0")
                offset += (name_size + 3) & ~3
                desc = block(offset, desc_size)
                offset += (desc_size + 3) & ~3
                if name == b"Android" and len(desc) >= 4:
                    api_notes.append(struct.unpack_from("<I", desc)[0])
    registration = "ll_mod_load" if role == "example" else "PLGetModRegistration"
    if registration not in exports or "ll_memory_operator_overrided" not in exports:
        raise InputError("missing original registration or memory ABI marker")
    if export_details[registration] != (2, 1, 0) or export_details["ll_memory_operator_overrided"][0] != 1:
        raise InputError("invalid registration/marker symbol kind")
    if any(name.startswith(("_ZN3fmt", "_ZNK3fmt", "_Znw", "_Zna", "_Zdl", "_Zda")) for name in exports):
        raise InputError("private formatter or allocation operators escaped the module")
    expected_soname = expected_soname or ("libLeviLaminaP7Example.so" if role == "example" else "libLeviLamina.so")
    if soname != expected_soname or api_notes != [28]:
        raise InputError("kernel SONAME or Android API note mismatch")
    allowed = {"libc++_shared.so", "libc.so", "libm.so", "libdl.so", "liblog.so", "libpreloader.so", "libandroid.so"}
    if role == "example":
        allowed.add("libLeviLamina.so")
        if "libLeviLamina.so" not in needed:
            raise InputError("example must depend on the kernel")
    if "libpreloader.so" not in needed:
        raise InputError("formal binary must retain its provider dependency")
    if not set(needed) <= allowed or "libc++_shared.so" not in needed:
        raise InputError("unexpected shared-library dependencies or missing c++_shared")
    return {"elf_sha256": sha(path), "bytes": len(data), "machine": "AArch64", "soname": soname,
            "exports": exports, "needed": needed, "android_api": 28, "load_segments": loads}


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("mode", choices=("elf",))
    parser.add_argument("--inputs", type=Path, required=True)
    parser.add_argument("--traces", type=Path)
    parser.add_argument("--object", type=Path, action="append", default=[])
    parser.add_argument("--elf", type=Path)
    args = parser.parse_args()
    try:
        config = read_json(args.inputs)
        if sha(Path(config["repository"]) / "config/android-kernel-inputs.lock.json") != config["lock_sha256"]:
            raise InputError("inputs changed after configuration")
        if not args.elf:
            raise InputError("kernel ELF is required")
        result = elf_contract(args.elf, config["phase"], config.get("role", "kernel"))
        result.update(phase=config["phase"], passed=True, G6_complete=False)
        write_json(args.inputs.parent / "elf.json", result)
        print("P7 ELF checks passed: registration, SDK visibility, API28/AArch64 and 16 KiB alignment.")
    except (InputError, OSError, ValueError, KeyError, struct.error, IndexError) as exc:
        parser.exit(1, f"P7 binary rejected: {exc}\n")


if __name__ == "__main__":
    main()
