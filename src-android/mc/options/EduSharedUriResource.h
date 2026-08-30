#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

struct EduSharedUriResource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> linkUri;
    ::ll::TypedStorage<8, 24, std::string> buttonName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EduSharedUriResource(::CompoundTag const&);

    MCNAPI bool operator!=(::EduSharedUriResource const&) const;

    MCNAPI bool operator==(::EduSharedUriResource const&) const;

    MCNAPI ~EduSharedUriResource();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<EduSharedUriResource> create(std::unordered_map<std::string, std::string> const&);

    MCNAPI static ::EduSharedUriResource fromTag(::CompoundTag const&);

    MCNAPI static std::unique_ptr<CompoundTag> toTag(::EduSharedUriResource const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CompoundTag const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
