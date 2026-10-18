#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DimensionType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mValue;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isCustom() const;

    MCNAPI int value() const;
    // NOLINTEND
#else // @header-generator platform
    operator int() const { return mValue; }
    DimensionType(int const value) : mValue(value) {}
    DimensionType() { mValue = 0; }
#endif // @header-generator platform
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

template <>
struct std::hash<DimensionType> {
    size_t operator()(DimensionType const& dimensionType) const noexcept {
        return std::hash<int>()(dimensionType.mValue);
    }
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::DimensionType>();
// clang-format on
#endif // @header-generator platform
