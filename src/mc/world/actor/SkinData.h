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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::optional<int>> mVariant;
    ::ll::TypedStorage<4, 8, std::optional<int>> mMarkVariant;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mVariant;
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mMarkVariant;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SkinData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit SkinData(::Actor const&);
#else // @header-generator platform
    MCAPI explicit SkinData(::Json::Value const& skinDataJson);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit SkinData(::Json::Value const&);
#else // @header-generator platform
    MCAPI void applyToActor(::Actor& actor) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void applyToActor(::Actor&) const;

    MCNAPI ::Json::Value serialize() const;

    MCNAPI bool softMatch(::SkinData const&, bool&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::Json::Value serialize() const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Actor const&);

    MCNAPI void* $ctor(::Json::Value const&);
#else // @header-generator platform
    MCAPI void* $ctor(::Json::Value const& skinDataJson);
#endif // @header-generator platform
    // NOLINTEND
};
