#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/game/LevelCullerDistanceField.h"
#include "mc/util/Bounds.h"

// auto generated forward declare list
// clang-format off
class LevelBuilder;
class LevelRendererCamera;
class SubChunkPos;
class Vec3;
// clang-format on

class LevelCullerDistanceFieldOrthographic : public ::LevelCullerDistanceField {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 48, ::Bounds>                                   mBounds;
    ::ll::TypedStorage<4, 64, ::glm::vec<4, float, (glm::qualifier)0>[4]> mSidePlanes;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelCullerDistanceFieldOrthographic();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelCullerDistanceFieldOrthographic();

    virtual void _prepareForCulling(std::shared_ptr<LevelRendererCamera>);

    virtual float _computeLinearDistance(::Vec3 const&) const;

    virtual bool _doesRenderDistanceApply() const;

    virtual bool _checkPositionAgainstBounds(::SubChunkPos const&) const;

    virtual bool _checkDistanceDelta(float) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addToHeapHelper(::Bounds const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_prepareForCulling(std::shared_ptr<LevelRendererCamera>);

    MCNAPI float $_computeLinearDistance(::Vec3 const&) const;

    MCNAPI bool $_doesRenderDistanceApply() const;

    MCNAPI bool $_checkPositionAgainstBounds(::SubChunkPos const&) const;

    MCNAPI bool $_checkDistanceDelta(float) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class LevelCullerDistanceFieldOrthographic {};
#endif // @header-generator platform
