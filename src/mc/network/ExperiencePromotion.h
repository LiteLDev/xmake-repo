#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/network/ExperiencePromotionActionType.h"
#else // @header-generator platform
#endif // @header-generator platform

struct ExperiencePromotion {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                    mBadgeImageUri;
    ::ll::TypedStorage<8, 24, std::string>                    mCachedBadgePath;
    ::ll::TypedStorage<8, 24, std::string>                    mCaption;
    ::ll::TypedStorage<8, 24, std::string>                    mButtonText;
    ::ll::TypedStorage<4, 4, ::ExperiencePromotionActionType> mButtonActionType;
    ::ll::TypedStorage<8, 24, std::string>                    mButtonActionUri;
    ::ll::TypedStorage<8, 24, std::string>                    mPdpTitleOverride;
    ::ll::TypedStorage<8, 24, std::string>                    mPdpDescriptionOverride;
    ::ll::TypedStorage<4, 4, int>                             mPromotionRank;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk93bed8;
    ::ll::UntypedStorage<8, 32> mUnk320d61;
    ::ll::UntypedStorage<8, 32> mUnk5fb349;
    ::ll::UntypedStorage<8, 32> mUnkf0ee31;
    ::ll::UntypedStorage<4, 4>  mUnkb7f19e;
    ::ll::UntypedStorage<8, 32> mUnk664829;
    ::ll::UntypedStorage<8, 32> mUnkc9b06d;
    ::ll::UntypedStorage<8, 32> mUnkde0c0c;
    ::ll::UntypedStorage<4, 4>  mUnk13fdd6;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    ExperiencePromotion& operator=(ExperiencePromotion const&);
    ExperiencePromotion();

#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ExperiencePromotion& operator=(ExperiencePromotion const&);
    ExperiencePromotion(ExperiencePromotion const&);
    ExperiencePromotion();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ExperiencePromotion& operator=(ExperiencePromotion const&);
    ExperiencePromotion();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ExperiencePromotion(::ExperiencePromotion const&);

    MCNAPI ~ExperiencePromotion();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ExperiencePromotion(::ExperiencePromotion const&);

    MCNAPI ::ExperiencePromotion& operator=(::ExperiencePromotion&&);

    MCNAPI ~ExperiencePromotion();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ExperiencePromotion const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::ExperiencePromotion const&);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
