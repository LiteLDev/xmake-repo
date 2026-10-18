#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ModalScreenData.h"
#include "mc/client/gui/screens/controllers/ModalWindowSize.h"

struct UserManagementModalScreenData : public ::ModalScreenData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ModalWindowSize> windowSize;
    ::ll::TypedStorage<1, 1, bool>              defaultFocusOnLeftButton;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ModalScreenData.h"
#include "mc/client/gui/screens/controllers/ModalWindowSize.h"

struct UserManagementModalScreenData : public ::ModalScreenData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ModalWindowSize> windowSize;
    ::ll::TypedStorage<1, 1, bool>              defaultFocusOnLeftButton;
    // NOLINTEND
};
#else // @header-generator platform
struct UserManagementModalScreenData {};
#endif // @header-generator platform
#endif // @header-generator platform
