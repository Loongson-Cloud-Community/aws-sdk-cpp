﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Crt
{
namespace Model
{

  /**
   * <p>Container for specifying if periodic <code>QueryProgress</code> messages
   * should be sent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/RequestProgress">AWS
   * API Reference</a></p>
   */
  class RequestProgress
  {
  public:
    AWS_S3CRT_API RequestProgress();
    AWS_S3CRT_API RequestProgress(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CRT_API RequestProgress& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CRT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Specifies whether periodic QueryProgress frames should be sent. Valid values:
     * TRUE, FALSE. Default value: FALSE.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether periodic QueryProgress frames should be sent. Valid values:
     * TRUE, FALSE. Default value: FALSE.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether periodic QueryProgress frames should be sent. Valid values:
     * TRUE, FALSE. Default value: FALSE.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether periodic QueryProgress frames should be sent. Valid values:
     * TRUE, FALSE. Default value: FALSE.</p>
     */
    inline RequestProgress& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
