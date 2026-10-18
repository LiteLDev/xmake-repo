#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/application/PushNotificationType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PushNotificationMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PushNotificationType> m_Type;
    ::ll::TypedStorage<8, 24, std::string>           m_Title;
    ::ll::TypedStorage<8, 24, std::string>           m_Description;
    ::ll::UntypedStorage<8, 16>                      m_PropertyBag;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PushNotificationMessage(::PushNotificationType, std::string, std::string, ::Json::Value const&);

    MCNAPI ~PushNotificationMessage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PushNotificationType, std::string, std::string, ::Json::Value const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class PushNotificationMessage {};
#endif // @header-generator platform
