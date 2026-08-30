#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/LayoutVariableType.h"

// auto generated forward declare list
// clang-format off
class LayoutComponent;
class LayoutVariable;
class UIControl;
// clang-format on

class VariableRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void*>                     mUnsafePointer;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>> mControl;
    ::ll::TypedStorage<8, 8, ::LayoutComponent*>        mLayoutComponent;
    ::ll::TypedStorage<1, 1, ::LayoutVariableType>      mType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VariableRef(::UIControl&, ::LayoutVariableType);

    MCNAPI std::shared_ptr<UIControl> getControl() const;

    MCNAPI ::LayoutVariableType getType() const;

    MCNAPI ::LayoutVariable const* getVariable() const;

    MCNAPI ::LayoutVariable* getVariable();

    MCNAPI bool isValid() const;

    MCNAPI bool operator==(::VariableRef const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::UIControl&, ::LayoutVariableType);
    // NOLINTEND
};
