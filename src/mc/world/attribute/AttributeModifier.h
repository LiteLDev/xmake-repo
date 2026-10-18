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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                 mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>               mName;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::mce::UUID>                 mId;
    ::ll::TypedStorage<1, 1, bool>                         mSerialize;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    AttributeModifier(AttributeModifier const&);
    AttributeModifier();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AttributeModifier();

    virtual bool isInstantaneous() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AttributeModifier();
#else // @header-generator platform
    MCAPI AttributeModifier(
        ::mce::UUID          id,
        ::std::string const& name,
        float                amount,
        int                  operation,
        int                  operand,
        bool                 serializable
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getAmount() const;
#else // @header-generator platform
    MCAPI AttributeModifier(
        ::mce::UUID                  id,
        ::std::string const&         name,
        float                        amount,
        ::AttributeModifierOperation operation,
        ::AttributeOperands          operand,
        bool                         serializable
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::AttributeModifier& operator=(::AttributeModifier const& rhs);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::mce::UUID const& mInvalidUUID();
#else // @header-generator platform
    MCAPI static ::mce::UUID const& mInvalidUUID();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void*
    $ctor(::mce::UUID id, ::std::string const& name, float amount, int operation, int operand, bool serializable);

    MCAPI void* $ctor(
        ::mce::UUID                  id,
        ::std::string const&         name,
        float                        amount,
        ::AttributeModifierOperation operation,
        ::AttributeOperands          operand,
        bool                         serializable
    );
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
    MCNAPI bool $isInstantaneous() const;
#else // @header-generator platform
    MCFOLD bool $isInstantaneous() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
