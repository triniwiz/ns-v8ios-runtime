// This file is generated by Forward_h.template.

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef v8_inspector_protocol_Forward_h
#define v8_inspector_protocol_Forward_h

#include "src/inspector/string-util.h"

#include <cstddef>
#include <memory>
#include <vector>
#include <unordered_map>
#include <unordered_set>

#include "third_party/inspector_protocol/crdtp/error_support.h"
#include "third_party/inspector_protocol/crdtp/dispatch.h"
#include "third_party/inspector_protocol/crdtp/frontend_channel.h"
#include "third_party/inspector_protocol/crdtp/protocol_core.h"

namespace v8_inspector {
namespace protocol {

class DictionaryValue;
using DispatchResponse = v8_crdtp::DispatchResponse;
using ErrorSupport = v8_crdtp::ErrorSupport;
using Serializable = v8_crdtp::Serializable;
using FrontendChannel = v8_crdtp::FrontendChannel;
using DomainDispatcher = v8_crdtp::DomainDispatcher;
using UberDispatcher = v8_crdtp::UberDispatcher;
class FundamentalValue;
class ListValue;
class Object;
using Response = DispatchResponse;
class SerializedValue;
class StringValue;
class Value;

using v8_crdtp::detail::PtrMaybe;
using v8_crdtp::detail::ValueMaybe;

template<typename T>
using Maybe = v8_crdtp::Maybe<T>;

namespace detail {

template <typename T>
struct ArrayTypedef { typedef std::vector<std::unique_ptr<T>> type; };

template <>
struct ArrayTypedef<String> { typedef std::vector<String> type; };

template <>
struct ArrayTypedef<int> { typedef std::vector<int> type; };

template <>
struct ArrayTypedef<double> { typedef std::vector<double> type; };

template <>
struct ArrayTypedef<bool> { typedef std::vector<bool> type; };
}  // namespace detail

template <typename T>
using Array = typename detail::ArrayTypedef<T>::type;

} // namespace v8_inspector
} // namespace protocol

#endif // !defined(v8_inspector_protocol_Forward_h)
