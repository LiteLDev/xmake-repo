#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/core/sem_ver/SemVersion.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class Input; }
namespace Puv { class LoadResultAny; }
namespace Puv { class ParserBase; }
namespace Puv { class UpgraderBase; }
namespace Puv { class VersionRange; }
// clang-format on

namespace Puv::internal {

class LoaderBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<Puv::ParserBase>>>            mParsers;
    ::ll::TypedStorage<8, 24, std::map<SemVersion, std::unique_ptr<Puv::UpgraderBase>>> mUpgraders;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Puv::LoadResultAny doLoad(::Puv::Input const&, ::SemVersion const&, ::cereal::ContextArea) const;

    MCNAPI void registerParser(std::unique_ptr<Puv::ParserBase>);

    MCNAPI void registerUpgrader(std::unique_ptr<Puv::UpgraderBase>);
    // NOLINTEND
};

} // namespace Puv::internal
