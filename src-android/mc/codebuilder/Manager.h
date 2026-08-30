#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/IManager.h"

// auto generated forward declare list
// clang-format off
namespace Automation { class AutomationClient; }
namespace CodeBuilder { class IMessenger; }
// clang-format on

namespace CodeBuilder {

class Manager : public ::CodeBuilder::IManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Automation::AutomationClient>> mAutomationClient;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CodeBuilder::IMessenger>>      mEventing;
    // NOLINTEND
};

} // namespace CodeBuilder
