import json

def lambda_handler(event, context):
    # Extract the request body
    body = json.loads(event['body'])

    # Do some processing on the data
    result = process_data(body)

    # Return the result as a JSON response
    return {
        'statusCode': 200,
        'body': json.dumps(result)
    }
