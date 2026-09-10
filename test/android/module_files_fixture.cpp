#include "ll/core/mod/ModuleFiles.h"
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <string>
#include <sys/stat.h>
#include <unistd.h>
using namespace ll::android;
namespace {
bool write(std::string const& path, std::string const& text) {
    std::ofstream file(path, std::ios::binary);
    return static_cast<bool>(file.write(text.data(), text.size()).flush());
}
#define CHECK(expr) do { if (!(expr)) { std::fprintf(stderr, "file fixture line %d: %s\n", __LINE__, #expr); return 1; } } while (false)
}
int main() {
    std::string root = "/data/local/tmp/levilamina-p6-files-XXXXXX";
    CHECK(mkdtemp(root.data()));
    auto source = root + "/source", generation = root + "/generation";
    CHECK(mkdir(source.c_str(), 0700) == 0 && mkdir(generation.c_str(), 0700) == 0);
    CHECK(write(source + "/manifest.json", "{\"type\":\"native\"}"));
    CHECK(write(source + "/libTest.so", "owned fixture bytes"));
    std::string manifest, copied;
    CHECK(readManifestFile(source, manifest) && manifest == "{\"type\":\"native\"}");
    CHECK(makeModDataDirectories(source) && makeModDataDirectories(source));
    CHECK(copyModToCache(source, "libTest.so", "one", manifest, generation, copied));
    struct stat info{};
    CHECK(stat(copied.c_str(), &info) == 0 && (info.st_mode & 0777) == 0400);
    {
        ModuleFile file;
        CHECK(file.open(copied) && !file.open(copied));
        CHECK(std::string(reinterpret_cast<char const*>(file.bytes().data()), file.bytes().size()) == "owned fixture bytes");
    }
    CHECK(!copyModToCache(source, "libTest.so", "one", manifest, generation, copied));
    CHECK(!copyModToCache(source, "../libTest.so", "two", manifest, generation, copied));
    CHECK(!copyModToCache(source, "libTest.so", "..", manifest, generation, copied));
    CHECK(symlink((source + "/libTest.so").c_str(), (source + "/link.so").c_str()) == 0);
    CHECK(!copyModToCache(source, "link.so", "linked", manifest, generation, copied));
    ModuleFile linked;
    CHECK(!linked.open(source + "/link.so"));
    CHECK(symlink(source.c_str(), (root + "/source-link").c_str()) == 0);
    CHECK(!readManifestFile(root + "/source-link", manifest));
    CHECK(!copyModToCache(root + "/source-link", "libTest.so", "linked-root", manifest, generation, copied));
    CHECK(symlink(generation.c_str(), (root + "/generation-link").c_str()) == 0);
    CHECK(!copyModToCache(source, "libTest.so", "linked-output", manifest, root + "/generation-link", copied));
    CHECK(rename((source + "/manifest.json").c_str(), (source + "/manifest.original").c_str()) == 0);
    CHECK(symlink((source + "/manifest.original").c_str(), (source + "/manifest.json").c_str()) == 0);
    CHECK(!readManifestFile(source, manifest));
    CHECK(unlink((source + "/manifest.json").c_str()) == 0);
    CHECK(write(source + "/manifest.json", std::string(65537, 'x')));
    CHECK(!readManifestFile(source, manifest));
    CHECK(write(source + "/empty.so", ""));
    ModuleFile empty;
    CHECK(!empty.open(source + "/empty.so"));
    CHECK(write(source + "/large.so", "x") && truncate((source + "/large.so").c_str(), 256LL * 1024 * 1024 + 1) == 0);
    ModuleFile large;
    CHECK(!large.open(source + "/large.so"));
    std::string self, privateGeneration;
    CHECK(!preparePrivateGeneration(reinterpret_cast<void*>(&ll::android::copyModToCache), self, privateGeneration));
    std::printf("module files passed: exact private copies, readonly cache, traversal/symlinks/size/duplicate rejection; evidence=%s\n", root.c_str());
}
