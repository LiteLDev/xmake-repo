#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/puv/VersionRange.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class Input; }
namespace Puv { class LoadResultAny; }
// clang-format on

namespace Puv {

class ParserBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mParserVersion;
    ::ll::UntypedStorage<8, 56> mSupportedVersions;
    // NOLINTEND

public:
    // prevent constructor by default
    ParserBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParserBase();

    virtual ::Puv::LoadResultAny doParse(::Puv::Input const&, ::cereal::ContextArea) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParserBase(::SemVersion const&, ::Puv::VersionRange);

    MCNAPI ::SemVersion const& parserVersion() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SemVersion const&, ::Puv::VersionRange);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Puv
