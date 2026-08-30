#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/ExperiencePromotionActionType.h"

struct ExperiencePromotion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                    mBadgeImageUri;
    ::ll::TypedStorage<8, 24, std::string>                    mCachedBadgePath;
    ::ll::TypedStorage<8, 24, std::string>                    mCaption;
    ::ll::TypedStorage<8, 24, std::string>                    mButtonText;
    ::ll::TypedStorage<4, 4, ::ExperiencePromotionActionType> mButtonActionType;
    ::ll::TypedStorage<8, 24, std::string>                    mButtonActionUri;
    ::ll::TypedStorage<8, 24, std::string>                    mPdpTitleOverride;
    ::ll::TypedStorage<8, 24, std::string>                    mPdpDescriptionOverride;
    ::ll::TypedStorage<4, 4, int>                             mPromotionRank;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperiencePromotion& operator=(ExperiencePromotion const&);
    ExperiencePromotion();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExperiencePromotion(::ExperiencePromotion const&);

    MCNAPI ~ExperiencePromotion();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ExperiencePromotion const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
