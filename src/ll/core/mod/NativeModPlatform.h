#pragma once

#include <filesystem>

#include "ll/api/Expected.h"
#include "ll/api/mod/Manifest.h"

namespace ll::mod {

Expected<std::filesystem::path> prepareNativeMod(Manifest const&, std::filesystem::path const& directory);

} // namespace ll::mod
