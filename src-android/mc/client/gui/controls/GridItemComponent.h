#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

class GridItemComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                   mCollectionIndex;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, int, (glm::qualifier)0>> mGridPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    GridItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GridItemComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual void reset();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int getCollectionIndex() const;

    MCNAPI ::glm::vec<2, int, (glm::qualifier)0> const& getGridPosition() const;

    MCNAPI void setGridPosition(::glm::vec<2, int, (glm::qualifier)0> const&);
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
