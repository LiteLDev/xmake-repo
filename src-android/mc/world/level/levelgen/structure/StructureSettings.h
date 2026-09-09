#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/util/AnimationMode.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BoundingBox;
// clang-format on

class StructureSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>    mPaletteName;
    ::ll::TypedStorage<1, 1, bool>            mIgnoreEntities;
    ::ll::TypedStorage<1, 1, bool>            mReloadActorEquipment;
    ::ll::TypedStorage<1, 1, bool>            mIgnoreBlocks;
    ::ll::TypedStorage<1, 1, bool>            mIsWaterLogged;
    ::ll::TypedStorage<1, 1, bool>            mIgnoreJigsawBlocks;
    ::ll::TypedStorage<1, 1, bool>            mAllowNonTickingPlayerAndTickingAreaChunks;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mLastTouchedByPlayer;
    ::ll::TypedStorage<4, 12, ::BlockPos>     mStructureSize;
    ::ll::TypedStorage<4, 12, ::BlockPos>     mStructureOffset;
    ::ll::TypedStorage<4, 12, ::Vec3>         mPivot;
    ::ll::TypedStorage<1, 1, ::Mirror>        mMirror;
    ::ll::TypedStorage<1, 1, ::Rotation>      mRotation;
    ::ll::TypedStorage<1, 1, ::AnimationMode> mAnimationMode;
    ::ll::TypedStorage<4, 4, float>           mAnimationSeconds;
    ::ll::TypedStorage<4, 4, float>           mIntegrityValue;
    ::ll::TypedStorage<4, 4, uint>            mIntegritySeed;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::AnimationMode getAnimationMode() const;

    MCNAPI float getAnimationSeconds() const;

    MCNAPI uint getAnimationTicks() const;

    MCNAPI bool getIgnoreBlocks() const;

    MCNAPI bool getIgnoreEntities() const;

    MCNAPI bool getIgnoreJigsawBlocks() const;

    MCNAPI uint getIntegritySeed() const;

    MCNAPI float getIntegrityValue() const;

    MCNAPI bool getIsWaterLogged() const;

    MCNAPI ::ActorUniqueID getLastTouchedByPlayerID() const;

    MCNAPI ::Mirror getMirror() const;

    MCNAPI ::Vec3 const& getPivot() const;

    MCNAPI bool getReloadActorEquipment() const;

    MCNAPI ::Rotation getRotation() const;

    MCNAPI ::BlockPos const& getStructureOffset() const;

    MCNAPI ::BlockPos const& getStructureSize() const;

    MCNAPI bool isAnimated() const;

    MCNAPI bool operator==(::StructureSettings const&) const;

    MCNAPI void setAllowNonTickingPlayerAndTickingAreaChunks(bool);

    MCNAPI void setAnimationMode(::AnimationMode);

    MCNAPI void setAnimationSeconds(float);

    MCNAPI void setIgnoreBlocks(bool);

    MCNAPI void setIgnoreEntities(bool);

    MCNAPI void setIgnoreJigsawBlocks(bool);

    MCNAPI void setIntegritySeed(uint);

    MCNAPI void setIntegrityValue(float);

    MCNAPI void setIsWaterLogged(bool);

    MCNAPI void setLastTouchedByPlayerID(::ActorUniqueID);

    MCNAPI void setMirror(::Mirror);

    MCNAPI void setPaletteName(std::string);

    MCNAPI void setPivot(::Vec3 const&);

    MCNAPI void setPivotFromStructureSize();

    MCNAPI void setReloadActorEquipment(bool);

    MCNAPI void setRotation(::Rotation);

    MCNAPI void setStructureOffset(::BlockPos const&);

    MCNAPI void setStructureSize(::BlockPos const&);

    MCNAPI bool shouldAllowNonTickingPlayerAndTickingAreaChunks() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BlockPos const& DEFAULT_STRUCTURE_OFFSET();

    MCNAPI static ::BlockPos const& DEFAULT_STRUCTURE_SIZE();
    // NOLINTEND
};
