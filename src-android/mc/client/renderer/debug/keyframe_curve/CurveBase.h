#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ImRect;
// clang-format on

namespace mce {

class CurveBase {
public:
    // CurveBase inner types declare
    // clang-format off
    struct ControlPoint;
    // clang-format on

    // CurveBase inner types define
    enum class Type : int {
        Hermite   = 0,
        Undefined = 1,
    };

    struct ControlPoint {
    public:
        // ControlPoint inner types define
        union Data {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 16>                                        mPosition;
            ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mColor;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                                   mXPosition;
        ::ll::TypedStorage<4, 16, ::mce::CurveBase::ControlPoint::Data>   mYData;
        ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mTangentRight;
        ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mTangentLeft;
        ::ll::TypedStorage<1, 1, bool>                                    mIsLocked;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::mce::CurveBase::Type> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    CurveBase& operator=(CurveBase const&);
    CurveBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CurveBase() = default;

    virtual float evaluateCurve(float) const = 0;

    virtual void getBoudingRect(::ImRect&) const = 0;

    virtual uint getControlPointsCount() const = 0;

    virtual ::mce::CurveBase::ControlPoint const& getControlPoint(uint) const = 0;

    virtual void updateControlPoint(::mce::CurveBase::ControlPoint const&, uint) = 0;

    virtual void addControlPoint(::mce::CurveBase::ControlPoint const&) = 0;

    virtual void deleteControlPoint(uint) = 0;

    virtual std::unique_ptr<mce::CurveBase> getCopy() const = 0;
    // NOLINTEND
};

} // namespace mce
