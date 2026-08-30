#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class CollectionItemComponent;
class UIControl;
// clang-format on

class CollectionComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                       mCurrentLength;
    ::ll::TypedStorage<8, 24, std::string>              mCollectionName;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mControlBindings;
    // NOLINTEND

public:
    // prevent constructor by default
    CollectionComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CollectionComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual void reset();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string const& getCollectionName() const;

    MCNAPI void setCollectionName(std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<UIComponent> $clone(::UIControl&) const;

    MCNAPI void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
