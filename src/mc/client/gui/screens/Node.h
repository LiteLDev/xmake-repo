#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"

struct Node {
public:
    // Node inner types define
    using NodeCallback = std::function<ui::ViewRequest(uint, const std::string&, int)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mOnEnter;
    ::ll::UntypedStorage<8, 48> mOnExit;
    // NOLINTEND

public:
    // prevent constructor by default
    Node(Node const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Node();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"

struct Node {
public:
    // Node inner types define
    using NodeCallback = ::std::function<::ui::ViewRequest(uint, ::std::string const&, int)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::ui::ViewRequest(uint, ::std::string const&, int)>> mOnEnter;
    ::ll::TypedStorage<8, 64, ::std::function<::ui::ViewRequest(uint, ::std::string const&, int)>> mOnExit;
    // NOLINTEND

public:
    // prevent constructor by default
    Node();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Node(
        ::std::function<::ui::ViewRequest(uint, ::std::string const&, int)> onEnter,
        ::std::function<::ui::ViewRequest(uint, ::std::string const&, int)> onExit
    );

    MCAPI ~Node();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<::ui::ViewRequest(uint, ::std::string const&, int)> onEnter,
        ::std::function<::ui::ViewRequest(uint, ::std::string const&, int)> onExit
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct Node {};
#endif // @header-generator platform
#endif // @header-generator platform
