#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class HeaderCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HeaderCollection(::Bedrock::Http::HeaderCollection&&);

    MCNAPI void _addHeader(std::string const&, std::string const&, bool const);

    MCNAPI void add(std::string const&, std::string const&);

    MCNAPI std::__hash_map_const_iterator<
        std::__hash_const_iterator<std::__hash_node<std::__hash_value_type<std::string, std::string>, void*>*>>
    begin() const;

    MCNAPI std::__hash_map_const_iterator<
        std::__hash_const_iterator<std::__hash_node<std::__hash_value_type<std::string, std::string>, void*>*>>
    end() const;

    MCNAPI std::string const& get(std::string const&) const;

    MCNAPI void set(std::string const&, std::string const&);

    MCNAPI void setNoSafetyChecks(std::string const&, std::string const&);

    MCNAPI ~HeaderCollection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::Http::HeaderCollection&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Http
