#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/providers/ConstantInt.h"
#include "mc/world/level/levelgen/v2/providers/IntProviderType.h"
#include "mc/world/level/levelgen/v2/providers/UniformInt.h"

// auto generated forward declare list
// clang-format off
class IRandom;
// clang-format on

struct IntProvider : public ::IntProviderType {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::variant<ConstantInt, UniformInt>> mProvider;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::variant<::ConstantInt, ::UniformInt>> mProvider;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IntProvider();
#else // @header-generator platform
    virtual int sample(::IRandom& random) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int sample(::IRandom&) const;
#else // @header-generator platform
    virtual int maxValue() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int maxValue() const;

    virtual int minValue() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual int minValue() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $sample(::IRandom&) const;
#else // @header-generator platform
    MCAPI int $sample(::IRandom& random) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $maxValue() const;
#else // @header-generator platform
    MCAPI int $maxValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $minValue() const;
#else // @header-generator platform
    MCAPI int $minValue() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
