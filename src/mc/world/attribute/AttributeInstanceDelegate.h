#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceHandle.h"

// auto generated forward declare list
// clang-format off
class AttributeBuff;
class AttributeInstance;
#if defined(LL_PLAT_A) // @header-generator platform
class AttributeInstanceConstRef;
class AttributeInstanceRef;
#else // @header-generator platform
#endif // @header-generator platform
struct AttributeModificationContext;
// clang-format on

class AttributeInstanceDelegate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::AttributeInstanceHandle> mAttributeHandle;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    AttributeInstanceDelegate();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~AttributeInstanceDelegate();
#else // @header-generator platform
    virtual ~AttributeInstanceDelegate() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::AttributeInstance&, ::AttributeModificationContext&);
#else // @header-generator platform
    virtual void tick(::AttributeInstance& mutableInstance, ::AttributeModificationContext& context);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void notify(long, ::AttributeModificationContext&);
#else // @header-generator platform
    virtual void notify(int64 type, ::AttributeModificationContext& context);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool willChange(float, float, ::AttributeBuff const&);
#else // @header-generator platform
    virtual bool willChange(float oldValue, float newValue, ::AttributeBuff const& buff);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<float> change(float, float, ::AttributeBuff const&);
#else // @header-generator platform
    virtual ::std::optional<float> change(float oldValue, float newValue, ::AttributeBuff const& buff);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getBuffValueWithModifiers(::AttributeBuff const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual float getBuffValueWithModifiers(::AttributeBuff const& buff) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $notify(long, ::AttributeModificationContext&);
#else // @header-generator platform
    MCFOLD void $tick(::AttributeInstance& mutableInstance, ::AttributeModificationContext& context);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $willChange(float, float, ::AttributeBuff const&);
#else // @header-generator platform
    MCFOLD void $notify(int64 type, ::AttributeModificationContext& context);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<float> $change(float, float, ::AttributeBuff const&);
#else // @header-generator platform
    MCFOLD bool $willChange(float oldValue, float newValue, ::AttributeBuff const& buff);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getBuffValueWithModifiers(::AttributeBuff const&) const;
#else // @header-generator platform
    MCAPI ::std::optional<float> $change(float oldValue, float newValue, ::AttributeBuff const& buff);

    MCAPI float $getBuffValueWithModifiers(::AttributeBuff const& buff) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
