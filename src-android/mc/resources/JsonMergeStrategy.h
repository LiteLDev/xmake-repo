#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/ResourcePackMergeStrategy.h"

// auto generated forward declare list
// clang-format off
class LoadedResourceData;
namespace Json { class Reader; }
namespace Json { class Value; }
// clang-format on

class JsonMergeStrategy : public ::ResourcePackMergeStrategy {
public:
    // JsonMergeStrategy inner types define
    using PreMergeCallback = std::function<bool(Json::Value&, const Json::Value&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>    mFileName;
    ::ll::TypedStorage<8, 16, ::Json::Value&> mRoot;
    ::ll::UntypedStorage<8, 48>               mPreMergeCallback;
    ::ll::UntypedStorage<4, 16>               mCurrentPacketIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonMergeStrategy& operator=(JsonMergeStrategy const&);
    JsonMergeStrategy(JsonMergeStrategy const&);
    JsonMergeStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JsonMergeStrategy();

    virtual void mergeFiles(std::vector<LoadedResourceData> const&);

    virtual bool _parseJson(::Json::Reader&, std::string const&, ::Json::Value&) const;

    virtual void _preMergeTransform(::Json::Value&);

    virtual void _preMergePacketTransform(int const);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    JsonMergeStrategy(std::string const&, ::Json::Value&, std::function<bool(Json::Value&, const Json::Value&)> const&);

    MCNAPI void _recursiveMerge(::Json::Value&, ::Json::Value const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(std::string const&, ::Json::Value&, std::function<bool(Json::Value&, const Json::Value&)> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $mergeFiles(std::vector<LoadedResourceData> const&);

    MCNAPI bool $_parseJson(::Json::Reader&, std::string const&, ::Json::Value&) const;

    MCNAPI void $_preMergeTransform(::Json::Value&);

    MCNAPI void $_preMergePacketTransform(int const);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
