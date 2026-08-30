#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
class SceneFactory;
namespace Social { class User; }
// clang-format on

class IGuidedFlowClient {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGuidedFlowClient();

    virtual std::shared_ptr<Social::User> getPrimaryUser() const = 0;

    virtual ::SceneFactory& getSceneFactory() const = 0;

    virtual ::IOptionRegistry& getOptions() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
