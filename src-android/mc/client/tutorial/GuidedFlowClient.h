#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/tutorial/IGuidedFlowClient.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IOptionRegistry;
class SceneFactory;
namespace Social { class User; }
// clang-format on

class GuidedFlowClient : public ::IGuidedFlowClient {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&> mClientInstance;
    // NOLINTEND

public:
    // prevent constructor by default
    GuidedFlowClient& operator=(GuidedFlowClient const&);
    GuidedFlowClient(GuidedFlowClient const&);
    GuidedFlowClient();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GuidedFlowClient();

    virtual std::shared_ptr<Social::User> getPrimaryUser() const;

    virtual ::SceneFactory& getSceneFactory() const;

    virtual ::IOptionRegistry& getOptions() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GuidedFlowClient(::IClientInstance&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IClientInstance&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<Social::User> $getPrimaryUser() const;

    MCNAPI ::SceneFactory& $getSceneFactory() const;

    MCNAPI ::IOptionRegistry& $getOptions() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
