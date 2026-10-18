#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/ButtonEdge.h"
#include "mc/client/gui/screens/ButtonEventType.h"
#include "mc/client/gui/screens/Node.h"
#include "mc/client/gui/screens/NodeId.h"
#include "mc/client/gui/screens/PointerHeldEdge.h"

// auto generated forward declare list
// clang-format off
struct PointerHeldScreenEventData;
// clang-format on

class ContainerInteractionStateMachine {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96>                                                      mCurrentNode;
    ::ll::TypedStorage<4, 4, ::NodeId>                                               mCurrentNodeId;
    ::ll::TypedStorage<4, 4, ::NodeId>                                               mDefaultNodeId;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, Node>>                         mNodes;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, std::vector<ButtonEdge>>>      mButtonEdges;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, std::vector<PointerHeldEdge>>> mPointerHeldEdges;
    ::ll::UntypedStorage<4, 16>                                                      mNodeChangeRequest;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContainerInteractionStateMachine();

    MCNAPI ::ui::ViewRequest _changeState(::NodeId, uint, std::string const&, int);

    MCNAPI void addEdge(::NodeId, ::NodeId, std::function<bool(uint, ButtonEventType, const std::string&, int)>, int);

    MCNAPI void
    addEdge(::NodeId, ::NodeId, std::function<bool(const PointerHeldScreenEventData&, const std::string&, int)>, int);

    MCNAPI void addNode(
        ::NodeId,
        std::function<ui::ViewRequest(uint, const std::string&, int)>,
        std::function<ui::ViewRequest(uint, const std::string&, int)>,
        bool
    );

    MCNAPI void forceNodeChange(::NodeId, uint, std::string const&, int);

    MCNAPI ::NodeId getCurrentNodeId() const;

    MCNAPI ::ui::ViewRequest receiveEvent(::PointerHeldScreenEventData const&, std::string const&, int);

    MCNAPI ::ui::ViewRequest receiveEvent(uint, ::ButtonEventType, std::string const&, int);

    MCNAPI void requestNodeChange(::NodeId);

    MCNAPI ::ui::ViewRequest resetToDefault(std::string const&, int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint const& BLANK_BUTTON_ID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/ButtonEventType.h"
#include "mc/client/gui/screens/Node.h"
#include "mc/client/gui/screens/NodeId.h"

// auto generated forward declare list
// clang-format off
struct ButtonEdge;
struct PointerHeldEdge;
struct PointerHeldScreenEventData;
// clang-format on

class ContainerInteractionStateMachine {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::Node>                                                     mCurrentNode;
    ::ll::TypedStorage<4, 4, ::NodeId>                                                     mCurrentNodeId;
    ::ll::TypedStorage<4, 4, ::NodeId>                                                     mDefaultNodeId;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::Node>>                           mNodes;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::std::vector<::ButtonEdge>>>      mButtonEdges;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::std::vector<::PointerHeldEdge>>> mPointerHeldEdges;
    ::ll::TypedStorage<4, 4, ::NodeId>                                                     mNodeChangeRequest;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContainerInteractionStateMachine();

    MCAPI ::ui::ViewRequest
    _changeState(::NodeId target, uint buttonId, ::std::string const& collectionName, int collectionIndex);

    MCAPI void addEdge(
        ::NodeId                                                                  source,
        ::NodeId                                                                  target,
        ::std::function<bool(uint, ::ButtonEventType, ::std::string const&, int)> requirement,
        int                                                                       priority
    );

    MCAPI void addEdge(
        ::NodeId                                                                              source,
        ::NodeId                                                                              target,
        ::std::function<bool(::PointerHeldScreenEventData const&, ::std::string const&, int)> requirement,
        int                                                                                   priority
    );

    MCAPI void addNode(
        ::NodeId                                                            id,
        ::std::function<::ui::ViewRequest(uint, ::std::string const&, int)> onEnter,
        ::std::function<::ui::ViewRequest(uint, ::std::string const&, int)> onExit,
        bool                                                                defaultNode
    );

    MCAPI ::ui::ViewRequest receiveEvent(
        ::PointerHeldScreenEventData const& pointerHeldEvent,
        ::std::string const&                collectionName,
        int                                 collectionIndex
    );

    MCAPI ::ui::ViewRequest
    receiveEvent(uint buttonId, ::ButtonEventType buttonType, ::std::string const& collectionName, int collectionIndex);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
class ContainerInteractionStateMachine {};
#endif // @header-generator platform
#endif // @header-generator platform
