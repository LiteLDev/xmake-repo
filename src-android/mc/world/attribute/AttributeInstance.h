#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceHandle.h"
#include "mc/world/attribute/AttributeModifier.h"
#include "mc/world/attribute/TemporalAttributeBuff.h"

// auto generated forward declare list
// clang-format off
class Attribute;
class AttributeBuff;
class AttributeInstanceConstRef;
class AttributeInstanceDelegate;
struct AttributeModificationContext;
namespace mce { class UUID; }
// clang-format on

class AttributeInstance {
public:
    // AttributeInstance inner types define
    using ModifierVector = std::vector<AttributeModifier>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Attribute const*>                          mAttribute;
    ::ll::TypedStorage<8, 24, std::vector<AttributeModifier>>             mModifierList;
    ::ll::TypedStorage<8, 24, std::vector<TemporalAttributeBuff>>         mTemporalBuffs;
    ::ll::TypedStorage<8, 24, std::vector<AttributeInstanceHandle>>       mListeners;
    ::ll::TypedStorage<8, 16, std::shared_ptr<AttributeInstanceDelegate>> mDelegate;
    ::ll::UntypedStorage<4, 12>                                           mField_2939988f;
    ::ll::UntypedStorage<4, 12>                                           mField_15a7b2a5;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AttributeInstance();

    virtual void tick(::AttributeModificationContext);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI float _calculateValue();

    MCNAPI float _sanitizeValue(float);

    MCNAPI std::optional<float> addBuff(::AttributeBuff const&, ::AttributeModificationContext);

    MCNAPI void addModifier(::AttributeModifier const&, ::AttributeModificationContext);

    MCNAPI void clearListenersAndDelegates();

    MCNAPI ::Attribute const* getAttribute() const;

    MCNAPI float getCurrentValue() const;

    MCNAPI float getDefaultValue(int) const;

    MCNAPI ::AttributeInstanceHandle getHandle() const;

    MCNAPI float getMaxValue() const;

    MCNAPI float getMinValue() const;

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
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::AttributeModificationContext);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
