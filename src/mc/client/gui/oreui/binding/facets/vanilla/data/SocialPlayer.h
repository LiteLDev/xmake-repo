#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SocialPlayerData.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SocialPlayerData.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct SocialPlayer : public ::OreUI::SocialPlayerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::string>> maybeXuid;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> maybePlatformId;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> maybeActorId;
    // NOLINTEND

public:
    // prevent constructor by default
    SocialPlayer& operator=(SocialPlayer const&);
    SocialPlayer(SocialPlayer const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SocialPlayer(::OreUI::SocialPlayerData const&);

    MCNAPI SocialPlayer(::OreUI::SocialPlayer&&);

    MCNAPI std::string const& getActiveProfileImageUrl() const;

    MCNAPI ~SocialPlayer();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool areIdsSamePlayer(std::string const&, std::string const&, std::string const&, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::SocialPlayerData const&);

    MCNAPI void* $ctor(::OreUI::SocialPlayer&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SocialPlayer : public ::OreUI::SocialPlayerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> maybeXuid;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> maybePlatformId;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> maybeActorId;
    // NOLINTEND

public:
    // prevent constructor by default
    SocialPlayer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SocialPlayer(::OreUI::SocialPlayerData const& data);

    MCAPI ::std::string const& getActiveProfileImageUrl() const;

    MCAPI ~SocialPlayer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::SocialPlayerData const& data);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct SocialPlayer {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
