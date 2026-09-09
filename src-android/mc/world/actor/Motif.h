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
        ::ll::TypedStorage<8, 24, std::vector<const Motif*>> mMotifs;
        ::ll::TypedStorage<8, 24, std::vector<const Motif*>> mSplitMeshMotifs;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI std::vector<const Motif*> _getBaseMotifs() const;

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
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const>                             mName;
    ::ll::TypedStorage<4, 4, int const>                                      mWidth;
    ::ll::TypedStorage<4, 4, int const>                                      mHeight;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0> const> mUVs;
    ::ll::TypedStorage<1, 1, bool const>                                     mIsPublic;
    ::ll::TypedStorage<1, 1, bool const>                                     mIsSplitMeshPainting;
    // NOLINTEND

public:
    // prevent constructor by default
    Motif();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int getHeight() const;

    MCNAPI std::string const getName() const;

    MCNAPI ::glm::vec<4, float, (glm::qualifier)0> const& getUVs() const;

    MCNAPI int getWidth() const;

    MCNAPI bool isPublic() const;

    MCNAPI bool isSplitMeshPainting() const;

    MCNAPI ~Motif();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Motif const& mAlban();

    MCNAPI static ::Motif const& mAztec();

    MCNAPI static ::Motif const& mAztec2();

    MCNAPI static ::Motif const& mBackyard();

    MCNAPI static ::Motif const& mBaroque();

    MCNAPI static ::Motif const& mBomb();

    MCNAPI static ::Motif const& mBouquet();

    MCNAPI static ::Motif const& mBurningSkull();

    MCNAPI static ::Motif const& mBust();

    MCNAPI static ::Motif const& mCavebird();

    MCNAPI static ::Motif const& mChainging();

    MCNAPI static ::Motif const& mCotan();

    MCNAPI static ::Motif const& mCourbet();

    MCNAPI static ::Motif const& mCreebet();

    MCNAPI static ::Motif const&& mDefaultImage();

    MCNAPI static ::Motif const& mDennis();

    MCNAPI static ::Motif const& mDonkeyKong();

    MCNAPI static ::Motif const& mEarth();

    MCNAPI static ::Motif const& mEndboss();

    MCNAPI static ::Motif const& mFern();

    MCNAPI static ::Motif const& mFighters();

    MCNAPI static ::Motif const& mFinding();

    MCNAPI static ::Motif const& mFire();

    MCNAPI static ::Motif const& mGraham();

    MCNAPI static ::Motif const& mHumble();

    MCNAPI static ::Motif const& mKebab();

    MCNAPI static ::Motif const& mLowmist();

    MCNAPI static ::Motif const& mMatch();

    MCNAPI static ::Motif const& mMeditative();

    MCNAPI static ::Motif const& mOrb();

    MCNAPI static ::Motif const& mOwlemons();

    MCNAPI static ::Motif const& mPassage();

    MCNAPI static ::Motif const& mPigscene();

    MCNAPI static ::Motif const& mPlant();

    MCNAPI static ::Motif const& mPointer();

    MCNAPI static ::Motif const& mPond();

    MCNAPI static ::Motif const& mPool();

    MCNAPI static ::Motif const& mPrairieRide();

    MCNAPI static ::Motif const& mSea();

    MCNAPI static ::Motif const& mSkeleton();

    MCNAPI static ::Motif const& mSkullAndRoses();

    MCNAPI static ::Motif const& mStage();

    MCNAPI static ::Motif const& mSunflowers();

    MCNAPI static ::Motif const& mSunset();

    MCNAPI static ::Motif const& mTides();

    MCNAPI static ::Motif const& mUnpacked();

    MCNAPI static ::Motif const& mVoid();

    MCNAPI static ::Motif const& mWanderer();

    MCNAPI static ::Motif const& mWasteland();

    MCNAPI static ::Motif const& mWater();

    MCNAPI static ::Motif const& mWind();

    MCNAPI static ::Motif const& mWither();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
