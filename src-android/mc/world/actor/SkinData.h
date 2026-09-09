#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace Json { class Value; }
// clang-format on

struct SkinData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, std::optional<int>> mVariant;
    ::ll::TypedStorage<4, 8, std::optional<int>> mMarkVariant;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SkinData(::Actor const&);

    MCNAPI explicit SkinData(::Json::Value const&);

    MCNAPI void applyToActor(::Actor&) const;

    MCNAPI ::Json::Value serialize() const;

    MCNAPI bool softMatch(::SkinData const&, bool&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Actor const&);

    MCNAPI void* $ctor(::Json::Value const&);
    // NOLINTEND
};
