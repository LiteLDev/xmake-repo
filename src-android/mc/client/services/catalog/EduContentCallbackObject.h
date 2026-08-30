#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/FetchResult.h"

// auto generated forward declare list
// clang-format off
struct EduContentDocument;
struct EduContentSearchResults;
namespace Bedrock::Http { class Status; }
// clang-format on

class EduContentCallbackObject {
public:
    // EduContentCallbackObject inner types define
    using EduContentSearchCallback = std::function<void(FetchResult, const EduContentSearchResults&)>;

    using EduContentHydrateCallback = std::function<void(const EduContentDocument&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mSearchCallback;
    ::ll::UntypedStorage<8, 48> mHydrateCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    EduContentCallbackObject& operator=(EduContentCallbackObject const&);
    EduContentCallbackObject();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduContentCallbackObject();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EduContentCallbackObject(std::function<void(FetchResult, const EduContentSearchResults&)>);

    MCNAPI explicit EduContentCallbackObject(std::function<void(const EduContentDocument&)>);

    MCNAPI void operator()(::FetchResult, ::EduContentSearchResults const&) const;

    MCNAPI void operator()(::Bedrock::Http::Status const&, ::EduContentDocument const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::function<void(FetchResult, const EduContentSearchResults&)>);

    MCNAPI void* $ctor(std::function<void(const EduContentDocument&)>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
