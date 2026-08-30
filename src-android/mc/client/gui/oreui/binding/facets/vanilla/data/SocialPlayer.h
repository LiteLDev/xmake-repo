#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SocialPlayerData.h"

namespace OreUI {

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

} // namespace OreUI
