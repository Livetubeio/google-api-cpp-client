// Copyright 2010 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.1
//   C++ generator version: 0.1.3

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Calendar API (calendar/v3)
// Generated from:
//   Version: v3
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.3
#ifndef  GOOGLE_CALENDAR_API_FREE_BUSY_CALENDAR_H_
#define  GOOGLE_CALENDAR_API_FREE_BUSY_CALENDAR_H_

#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/calendar_api/error.h"
#include "google/calendar_api/time_period.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_calendar_api {
using namespace googleapis;

/**
 * No description provided.
 *
 * @ingroup DataObject
 */
class FreeBusyCalendar : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static FreeBusyCalendar* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit FreeBusyCalendar(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit FreeBusyCalendar(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~FreeBusyCalendar();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_calendar_api::FreeBusyCalendar</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_calendar_api::FreeBusyCalendar");
  }

  /**
   * Determine if the '<code>busy</code>' attribute was set.
   *
   * @return true if the '<code>busy</code>' attribute was set.
   */
  bool has_busy() const {
    return Storage().isMember("busy");
  }

  /**
   * Clears the '<code>busy</code>' attribute.
   */
  void clear_busy() {
    MutableStorage()->removeMember("busy");
  }


  /**
   * Get a reference to the value of the '<code>busy</code>' attribute.
   */
  const client::JsonCppArray<TimePeriod > get_busy() const;

  /**
   * Gets a reference to a mutable value of the '<code>busy</code>' property.
   *
   * List of time ranges during which this calendar should be regarded as busy.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<TimePeriod > mutable_busy();

  /**
   * Determine if the '<code>errors</code>' attribute was set.
   *
   * @return true if the '<code>errors</code>' attribute was set.
   */
  bool has_errors() const {
    return Storage().isMember("errors");
  }

  /**
   * Clears the '<code>errors</code>' attribute.
   */
  void clear_errors() {
    MutableStorage()->removeMember("errors");
  }


  /**
   * Get a reference to the value of the '<code>errors</code>' attribute.
   */
  const client::JsonCppArray<Error > get_errors() const;

  /**
   * Gets a reference to a mutable value of the '<code>errors</code>' property.
   *
   * Optional error(s) (if computation for the calendar failed).
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<Error > mutable_errors();

 private:
  void operator=(const FreeBusyCalendar&);
};  // FreeBusyCalendar
}  // namespace google_calendar_api
#endif  // GOOGLE_CALENDAR_API_FREE_BUSY_CALENDAR_H_
