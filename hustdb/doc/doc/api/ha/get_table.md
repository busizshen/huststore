## get_table ##

**接口:** `/get_table`

**方法:** `GET`

**参数:** 无

该接口用于读取负载均衡表。

**使用范例:**

    curl -i -X GET "http://localhost:8082/get_table"

**返回值范例:**

	HTTP/1.1 200 OK
	Server: nginx/1.9.4
	Date: Mon, 29 Feb 2016 07:22:25 GMT
	Content-Type: text/plain
	Content-Length: 624
	Connection: keep-alive
	
	{
	    "table":
	    [
	        { "item": { "key": [0, 128], "val": ["10.120.100.178:9999", "10.120.100.178:9998"] } },
	        { "item": { "key": [128, 256], "val": ["10.120.100.178:9998", "10.120.100.179:9999"] } },
	        { "item": { "key": [256, 384], "val": ["10.120.100.179:9999", "10.120.100.179:9998"] } },
	        { "item": { "key": [384, 512], "val": ["10.120.100.179:9998", "10.120.100.180:9999"] } },
	        { "item": { "key": [512, 768], "val": ["10.120.100.180:9999", "10.120.100.180:9998"] } },
	        { "item": { "key": [768, 1024], "val": ["10.120.100.180:9998", "10.120.100.178:9999"] } }
	    ]
	}

[上一级](../ha.md)

[根目录](../../index.md)