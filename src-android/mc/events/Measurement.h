#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Social::Events {

class Measurement {
public:
    // Measurement inner types define
    enum class AggregationType : int {
        Increment = 0,
        Sum       = 1,
        Min       = 2,
        Max       = 3,
        Average   = 4,
        Latest    = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                   mName;
    ::ll::UntypedStorage<8, 16>                                              mValue;
    ::ll::TypedStorage<4, 4, int>                                            mValueDivisorForAverage;
    ::ll::TypedStorage<4, 4, ::Social::Events::Measurement::AggregationType> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    Measurement& operator=(Measurement const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string const& getName() const;

    MCNAPI void updateMeasurement(::Social::Events::Measurement const&);

    MCNAPI ~Measurement();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
