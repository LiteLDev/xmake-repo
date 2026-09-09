#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/game/LevelCullerDistanceField.h"

// auto generated forward declare list
// clang-format off
class LevelBuilder;
class LevelRendererCamera;
class SubChunkPos;
class Vec3;
struct Bounds;
// clang-format on

class LevelCullerDistanceFieldPerspective : public ::LevelCullerDistanceField {
public:
    // prevent constructor by default
    LevelCullerDistanceFieldPerspective();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelCullerDistanceFieldPerspective();

    virtual void _prepareForCulling(std::shared_ptr<LevelRendererCamera>);

    virtual float _computeLinearDistance(::Vec3 const&) const;

    virtual bool _doesRenderDistanceApply() const;

    virtual bool _checkPositionAgainstBounds(::SubChunkPos const&) const;

    virtual bool _checkDistanceDelta(float) const;
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
