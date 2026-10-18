#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceHandle.h"
#include "mc/world/attribute/AttributeModifier.h"
#include "mc/world/attribute/TemporalAttributeBuff.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Attribute;
class AttributeBuff;
#if defined(LL_PLAT_A) // @header-generator platform
class AttributeInstanceConstRef;
#else // @header-generator platform
#endif // @header-generator platform
class AttributeInstanceDelegate;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class AttributeInstanceHandle;
class AttributeModifier;
class TemporalAttributeBuff;
#endif // @header-generator platform
struct AttributeModificationContext;
#if defined(LL_PLAT_A) // @header-generator platform
namespace mce { class UUID; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class AttributeInstance {
public:
    // AttributeInstance inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using ModifierVector = std::vector<AttributeModifier>;
#else // @header-generator platform
    using ModifierVector = ::std::vector<::AttributeModifier>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Attribute const*>                          mAttribute;
    ::ll::TypedStorage<8, 24, std::vector<AttributeModifier>>             mModifierList;
    ::ll::TypedStorage<8, 24, std::vector<TemporalAttributeBuff>>         mTemporalBuffs;
    ::ll::TypedStorage<8, 24, std::vector<AttributeInstanceHandle>>       mListeners;
    ::ll::TypedStorage<8, 16, std::shared_ptr<AttributeInstanceDelegate>> mDelegate;
    ::ll::UntypedStorage<4, 12>                                           mField_2939988f;
    ::ll::UntypedStorage<4, 12>                                           mField_15a7b2a5;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Attribute const*>                              mAttribute;
    ::ll::TypedStorage<8, 24, ::std::vector<::AttributeModifier>>             mModifierList;
    ::ll::TypedStorage<8, 24, ::std::vector<::TemporalAttributeBuff>>         mTemporalBuffs;
    ::ll::TypedStorage<8, 24, ::std::vector<::AttributeInstanceHandle>>       mListeners;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AttributeInstanceDelegate>> mDelegate;
    union {
        ::ll::TypedStorage<4, 12, float[3]> mDefaultValues;
        struct {
            ::ll::TypedStorage<4, 4, float> mDefaultMinValue;
            ::ll::TypedStorage<4, 4, float> mDefaultMaxValue;
            ::ll::TypedStorage<4, 4, float> mDefaultValue;
        };
    };
    union {
        ::ll::TypedStorage<4, 12, float[3]> mCurrentValues;
        struct {
            ::ll::TypedStorage<4, 4, float> mCurrentMinValue;
            ::ll::TypedStorage<4, 4, float> mCurrentMaxValue;
            ::ll::TypedStorage<4, 4, float> mCurrentValue;
        };
    };
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    AttributeInstance();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AttributeInstance();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::AttributeModificationContext);
#else // @header-generator platform
    virtual void tick(::AttributeModificationContext context);
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float _calculateValue();
#else // @header-generator platform
    MCAPI AttributeInstance(::AttributeInstance const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float _sanitizeValue(float);
#else // @header-generator platform
    MCAPI float _calculateValue();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<float> addBuff(::AttributeBuff const&, ::AttributeModificationContext);
#else // @header-generator platform
    MCAPI float _sanitizeValue(float value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addModifier(::AttributeModifier const&, ::AttributeModificationContext);
#else // @header-generator platform
    MCAPI ::std::optional<float> addBuff(::AttributeBuff const& buff, ::AttributeModificationContext context);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearListenersAndDelegates();
#else // @header-generator platform
    MCAPI void addModifier(::std::shared_ptr<::AttributeModifier> modifier, ::AttributeModificationContext context);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Attribute const* getAttribute() const;
#else // @header-generator platform
    MCAPI ::std::vector<::AttributeModifier> getModifiers() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getCurrentValue() const;
#else // @header-generator platform
    MCAPI bool hasModifier(::AttributeModifier const& modifier) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getDefaultValue(int) const;
#else // @header-generator platform
    MCAPI ::AttributeInstance& operator=(::AttributeInstance const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AttributeInstanceHandle getHandle() const;
#else // @header-generator platform
    MCAPI void removeBuff(::AttributeBuff const& buff);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getMaxValue() const;
#else // @header-generator platform
    MCAPI void removeModifier(::AttributeModifier const& modifier, ::AttributeModificationContext context);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getMinValue() const;
#else // @header-generator platform
    MCAPI void updateModifier(::AttributeModifier const& takeOver, ::AttributeModificationContext context);
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<AttributeModifier> getModifiers() const;

    MCNAPI bool hasModifier(::AttributeModifier const&) const;

    MCNAPI bool hasModifiers() const;

    MCNAPI bool hasTemporalBuffs() const;

    MCNAPI bool isValid() const;

    MCNAPI void recalculateModifiers(::AttributeModificationContext);

    MCNAPI void registerListener(::AttributeInstanceConstRef);

    MCNAPI void removeBuff(::AttributeBuff const&);

    MCNAPI void removeModifier(::AttributeModifier const&, ::AttributeModificationContext);

    MCNAPI void resetToDefaultValue(::AttributeModificationContext);

    MCNAPI void setDefaultValue(float, int, ::AttributeModificationContext);

    MCNAPI void setDefaultValueOnly(float, ::AttributeModificationContext);

    MCNAPI void setDelegate(std::shared_ptr<AttributeInstanceDelegate>);

    MCNAPI void setMaxValue(float, ::AttributeModificationContext);

    MCNAPI void setRange(float, float, float, ::AttributeModificationContext);

    MCNAPI void updateModifier(::AttributeModifier const&, ::AttributeModificationContext);
#else // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AttributeInstance const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::AttributeModificationContext);
#else // @header-generator platform
    MCAPI void $tick(::AttributeModificationContext context);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
