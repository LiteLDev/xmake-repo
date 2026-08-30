#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
