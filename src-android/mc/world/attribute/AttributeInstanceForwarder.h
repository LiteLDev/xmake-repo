#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceRef.h"
#include "mc/world/attribute/AttributeModificationContext.h"

// auto generated forward declare list
// clang-format off
class AttributeBuff;
class AttributeModifier;
namespace mce { class UUID; }
// clang-format on

struct AttributeInstanceForwarder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::AttributeInstanceRef>         mInstance;
    ::ll::TypedStorage<8, 8, ::AttributeModificationContext> mContext;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<float> addBuff(::AttributeBuff const&);

    MCNAPI void addModifier(std::shared_ptr<AttributeModifier>);

    MCNAPI void addModifier(::AttributeModifier const&);

    MCNAPI float getCurrentValue() const;

    MCNAPI float getDefaultValue(int) const;

    MCNAPI bool hasModifier(::mce::UUID const&) const;

    MCNAPI bool hasModifier(std::shared_ptr<AttributeModifier>) const;

    MCNAPI bool hasModifier(::AttributeModifier const&) const;

    MCNAPI void removeBuffs();

    MCNAPI bool removeModifier(::mce::UUID const&);

    MCNAPI void removeModifier(std::shared_ptr<AttributeModifier>);

    MCNAPI void removeModifier(::AttributeModifier const&);

    MCNAPI void resetToDefaultValue();

    MCNAPI void resetToMaxValue();

    MCNAPI void resetToMinValue();

    MCNAPI void serializationSetValue(float, int, float);

    MCNAPI void setCurrentValue(float);

    MCNAPI void setDefaultValue(float, int);

    MCNAPI void setMaxValue(float);

    MCNAPI void setRange(float, float, float);
    // NOLINTEND
};
