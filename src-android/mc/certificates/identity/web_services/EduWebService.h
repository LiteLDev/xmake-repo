#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/web_services/IEduWebService.h"
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/options/EDUConfigData.h"

// auto generated forward declare list
// clang-format off
class ResponseVerifier;
class TaskGroup;
namespace Json { class Value; }
// clang-format on

namespace WebServices {

class EduWebService : public ::WebServices::IEduWebService, public ::Bedrock::Threading::EnableQueueForMainThread {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>                           mResponseVerifier;
    ::ll::UntypedStorage<8, 48>                          mGetEduIdentityToken;
    ::ll::UntypedStorage<8, 48>                          mConfigParser;
    ::ll::TypedStorage<8, 24, std::string>               mAppSessionId;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mTaskGroup;
    // NOLINTEND
};

} // namespace WebServices
