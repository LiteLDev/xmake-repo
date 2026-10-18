#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/PropertyBag.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class CommandPropertyBag : public ::PropertyBag {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CommandPropertyBag();
#else // @header-generator platform
    virtual ~CommandPropertyBag() = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void set(std::string const&, ::Json::Value const&);
#else // @header-generator platform
    MCAPI void addToResultList(::std::string const& key, ::std::string const& element);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void set(std::string const&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI void set(::std::string const& key, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void set(std::string const&, ::Vec3 const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void set(::std::string const& key, ::Vec3 size);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
