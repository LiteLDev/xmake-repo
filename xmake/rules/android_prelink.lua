rule("ll.android.prelink")
    on_link(function(target)
        local args = {path.join(os.projectdir(), "scripts/android_kernel_link.py"),
            "--inputs", target:data("p6.inputs"), "--traces", target:data("p6.traces"),
            "--prelink-dir", target:data("p6.prelink"), "--elf", path.absolute(target:targetfile())}
        for _, object in ipairs(target:objectfiles()) do
            table.insert(args, "--object")
            table.insert(args, path.absolute(object))
        end
        if target:data("p6.role") == "example" then
            table.insert(args, "--kernel-elf")
            table.insert(args, path.absolute(target:dep("LeviLaminaAndroidKernel"):targetfile()))
        end
        os.vrunv("python", args)
    end)
rule_end()
