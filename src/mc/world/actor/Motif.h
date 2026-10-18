#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
// clang-format on

class Motif {
public:
    // Motif inner types declare
    // clang-format off
    class Registry;
    // clang-format on

    // Motif inner types define
    class Registry {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<const Motif*>> mMotifs;
        ::ll::TypedStorage<8, 24, std::vector<const Motif*>> mSplitMeshMotifs;
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::std::vector<::Motif const*>> mMotifs;
        ::ll::TypedStorage<8, 24, ::std::vector<::Motif const*>> mSplitMeshMotifs;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::vector<const Motif*> _getBaseMotifs() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCAPI ::Motif const& getMotifByName(::std::string const& name) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::vector<const Motif*> _getR21Motifs() const;

        MCNAPI void clear();

        MCNAPI ::Motif const& getMotifByName(std::string const&) const;

        MCNAPI std::vector<const Motif*> const& getSplitMeshMotifsAsList() const;

        MCNAPI void init(::BaseGameVersion const&);
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static ::Motif::Registry& get();
#else // @header-generator platform
        MCAPI void init(::BaseGameVersion const& baseGameVersion);
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string const>                             mName;
    ::ll::TypedStorage<4, 4, int const>                                      mWidth;
    ::ll::TypedStorage<4, 4, int const>                                      mHeight;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0> const> mUVs;
    ::ll::TypedStorage<1, 1, bool const>                                     mIsPublic;
    ::ll::TypedStorage<1, 1, bool const>                                     mIsSplitMeshPainting;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string const> mName;
    ::ll::TypedStorage<4, 4, int const>            mWidth;
    ::ll::TypedStorage<4, 4, int const>            mHeight;
    ::ll::TypedStorage<4, 16, ::glm::vec4 const>   mUVs;
    ::ll::TypedStorage<1, 1, bool const>           mIsPublic;
    ::ll::TypedStorage<1, 1, bool const>           mIsSplitMeshPainting;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Motif();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getHeight() const;
#else // @header-generator platform
    MCAPI Motif(::std::string name, int w, int h, ::glm::vec4 UVs, bool isPublic, bool isSplitMeshPainting);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const getName() const;

    MCNAPI ::glm::vec<4, float, (glm::qualifier)0> const& getUVs() const;

    MCNAPI int getWidth() const;

    MCNAPI bool isPublic() const;

    MCNAPI bool isSplitMeshPainting() const;

    MCNAPI ~Motif();
#else // @header-generator platform
    MCFOLD ::std::string const getName() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mAlban();
#else // @header-generator platform
    MCAPI static ::Motif const& mAlban();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mAztec();
#else // @header-generator platform
    MCAPI static ::Motif const& mAztec();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mAztec2();
#else // @header-generator platform
    MCAPI static ::Motif const& mAztec2();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mBackyard();
#else // @header-generator platform
    MCAPI static ::Motif const& mBackyard();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mBaroque();
#else // @header-generator platform
    MCAPI static ::Motif const& mBaroque();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mBomb();
#else // @header-generator platform
    MCAPI static ::Motif const& mBomb();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mBouquet();
#else // @header-generator platform
    MCAPI static ::Motif const& mBouquet();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mBurningSkull();
#else // @header-generator platform
    MCAPI static ::Motif const& mBurningSkull();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mBust();
#else // @header-generator platform
    MCAPI static ::Motif const& mBust();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mCavebird();
#else // @header-generator platform
    MCAPI static ::Motif const& mCavebird();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mChainging();
#else // @header-generator platform
    MCAPI static ::Motif const& mChainging();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mCotan();
#else // @header-generator platform
    MCAPI static ::Motif const& mCotan();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mCourbet();
#else // @header-generator platform
    MCAPI static ::Motif const& mCourbet();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mCreebet();
#else // @header-generator platform
    MCAPI static ::Motif const& mCreebet();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const&& mDefaultImage();
#else // @header-generator platform
    MCAPI static ::Motif const& mDennis();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mDennis();
#else // @header-generator platform
    MCAPI static ::Motif const& mDonkeyKong();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mDonkeyKong();
#else // @header-generator platform
    MCAPI static ::Motif const& mEarth();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mEarth();
#else // @header-generator platform
    MCAPI static ::Motif const& mEndboss();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mEndboss();
#else // @header-generator platform
    MCAPI static ::Motif const& mFern();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mFern();
#else // @header-generator platform
    MCAPI static ::Motif const& mFighters();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mFighters();
#else // @header-generator platform
    MCAPI static ::Motif const& mFinding();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mFinding();
#else // @header-generator platform
    MCAPI static ::Motif const& mFire();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mFire();
#else // @header-generator platform
    MCAPI static ::Motif const& mGraham();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mGraham();
#else // @header-generator platform
    MCAPI static ::Motif const& mHumble();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mHumble();
#else // @header-generator platform
    MCAPI static ::Motif const& mKebab();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mKebab();
#else // @header-generator platform
    MCAPI static ::Motif const& mLowmist();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mLowmist();
#else // @header-generator platform
    MCAPI static ::Motif const& mMatch();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mMatch();
#else // @header-generator platform
    MCAPI static ::Motif const& mMeditative();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mMeditative();
#else // @header-generator platform
    MCAPI static ::Motif const& mOrb();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mOrb();
#else // @header-generator platform
    MCAPI static ::Motif const& mOwlemons();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mOwlemons();
#else // @header-generator platform
    MCAPI static ::Motif const& mPassage();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mPassage();
#else // @header-generator platform
    MCAPI static ::Motif const& mPigscene();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mPigscene();
#else // @header-generator platform
    MCAPI static ::Motif const& mPlant();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mPlant();
#else // @header-generator platform
    MCAPI static ::Motif const& mPointer();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mPointer();
#else // @header-generator platform
    MCAPI static ::Motif const& mPond();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mPond();
#else // @header-generator platform
    MCAPI static ::Motif const& mPool();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mPool();
#else // @header-generator platform
    MCAPI static ::Motif const& mPrairieRide();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mPrairieRide();
#else // @header-generator platform
    MCAPI static ::Motif const& mSea();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mSea();
#else // @header-generator platform
    MCAPI static ::Motif const& mSkeleton();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mSkeleton();
#else // @header-generator platform
    MCAPI static ::Motif const& mSkullAndRoses();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mSkullAndRoses();
#else // @header-generator platform
    MCAPI static ::Motif const& mStage();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mStage();
#else // @header-generator platform
    MCAPI static ::Motif const& mSunflowers();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mSunflowers();
#else // @header-generator platform
    MCAPI static ::Motif const& mSunset();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mSunset();
#else // @header-generator platform
    MCAPI static ::Motif const& mTides();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mTides();
#else // @header-generator platform
    MCAPI static ::Motif const& mUnpacked();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mUnpacked();
#else // @header-generator platform
    MCAPI static ::Motif const& mVoid();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mVoid();
#else // @header-generator platform
    MCAPI static ::Motif const& mWanderer();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mWanderer();
#else // @header-generator platform
    MCAPI static ::Motif const& mWasteland();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mWasteland();
#else // @header-generator platform
    MCAPI static ::Motif const& mWater();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mWater();
#else // @header-generator platform
    MCAPI static ::Motif const& mWind();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Motif const& mWind();

    MCNAPI static ::Motif const& mWither();
#else // @header-generator platform
    MCAPI static ::Motif const& mWither();
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::std::string name, int w, int h, ::glm::vec4 UVs, bool isPublic, bool isSplitMeshPainting);
#endif // @header-generator platform
    // NOLINTEND
};
