#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/debug/keyframe_curve/CurveBase.h"
#include "mc/deps/core/math/Matrix.h"

// auto generated forward declare list
// clang-format off
struct ImRect;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class CurveHermite : public ::mce::CurveBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Matrix>> mSegments;
    ::ll::TypedStorage<8, 24, std::vector<float>>  mSegmentTs;
    ::ll::UntypedStorage<8, 24>                    mControlPoints;
    ::ll::TypedStorage<1, 1, bool>                 mColorCurve;
    // NOLINTEND

public:
    // prevent constructor by default
    CurveHermite& operator=(CurveHermite const&);
    CurveHermite();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CurveHermite() = default;

    virtual float evaluateCurve(float) const;

    virtual void getBoudingRect(::ImRect&) const;

    virtual uint getControlPointsCount() const;

    virtual ::mce::CurveBase::ControlPoint const& getControlPoint(uint) const;

    virtual void updateControlPoint(::mce::CurveBase::ControlPoint const&, uint);

    virtual void addControlPoint(::mce::CurveBase::ControlPoint const&);

    virtual void deleteControlPoint(uint);

    virtual std::unique_ptr<mce::CurveBase> getCopy() const;
    // NOLINTEND
};
#else // @header-generator platform
class CurveHermite {};
#endif // @header-generator platform

} // namespace mce
