#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DataLoadHelper;
class EntityContext;
// clang-format on

class IDefinitionInstance {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mName;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk3f4ee1;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    IDefinitionInstance& operator=(IDefinitionInstance const&);
    IDefinitionInstance(IDefinitionInstance const&);
    IDefinitionInstance();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _initialize(::EntityContext&) const = 0;
#if defined(LL_PLAT_A) // @header-generator platform

    virtual ~IDefinitionInstance();
#else // @header-generator platform
#endif // @header-generator platform

    virtual void _uninitialize(::EntityContext&) const = 0;

    virtual void _save(::EntityContext const&, ::CompoundTag&) const = 0;

    virtual void _load(::EntityContext&, ::CompoundTag const&, ::DataLoadHelper&) const = 0;

    virtual void _reload(::EntityContext&) const = 0;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    virtual ~IDefinitionInstance();
#endif // @header-generator platform

    virtual ushort getDefinitionTypeId() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
