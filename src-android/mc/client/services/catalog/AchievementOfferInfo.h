#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/title_info/TitleId.h"

class AchievementOfferInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::TitleInfo::TitleId> mAchievementTitleId;
    // NOLINTEND

public:
    // prevent constructor by default
    AchievementOfferInfo();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AchievementOfferInfo();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AchievementOfferInfo(std::string const&, std::vector<std::string> const&);

    MCNAPI ::TitleInfo::TitleId const& getAchievementTitleId() const;

    MCNAPI bool isAchievementOfferOfCurrentTitle() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, std::vector<std::string> const&);
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
