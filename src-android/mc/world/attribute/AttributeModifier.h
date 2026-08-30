#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/world/attribute/AttributeModifierOperation.h"
#include "mc/world/attribute/AttributeOperands.h"

class AttributeModifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                        mAmount;
    ::ll::TypedStorage<4, 4, ::AttributeModifierOperation> mOperation;
    ::ll::TypedStorage<4, 4, ::AttributeOperands>          mOperand;
    ::ll::TypedStorage<8, 24, std::string>                 mName;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                 mId;
    ::ll::TypedStorage<1, 1, bool>                         mSerialize;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AttributeModifier();

    virtual bool isInstantaneous() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AttributeModifier();

    MCNAPI float getAmount() const;

    MCNAPI ::mce::UUID const& getId() const;

    MCNAPI std::string getIdAsString() const;

    MCNAPI std::string const& getName() const;

    MCNAPI int getOperand() const;

    MCNAPI int getOperation() const;

    MCNAPI bool isSerializable() const;

    MCNAPI ::AttributeModifier& operator=(::AttributeModifier const&);

    MCNAPI bool operator==(::AttributeModifier const&) const;

    MCNAPI void setAmount(float);

    MCNAPI void setIdFromString(std::string const&);

    MCNAPI void setName(std::string const&);

    MCNAPI void setOperand(int);

    MCNAPI void setOperation(int);

    MCNAPI void setSerialize(bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::UUID const& mInvalidUUID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isInstantaneous() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
